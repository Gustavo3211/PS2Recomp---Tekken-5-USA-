#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003663F8
// Address: 0x3663f8 - 0x366508
void sub_003663F8_0x3663f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003663F8_0x3663f8");
#endif

    switch (ctx->pc) {
        case 0x366458u: goto label_366458;
        case 0x3664e0u: goto label_3664e0;
        default: break;
    }

    ctx->pc = 0x3663f8u;

    // 0x3663f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3663f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3663fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3663fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366404: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x366404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x366408: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x366408u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x36640c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x366410: 0x8e021494  lw          $v0, 0x1494($s0)
    ctx->pc = 0x366410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5268)));
    // 0x366414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x366414u;
    {
        const bool branch_taken_0x366414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366414u;
        // 0x366418: 0x8e060988  lw          $a2, 0x988($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366414) {
            ctx->pc = 0x366430u;
            goto label_366430;
        }
    }
    ctx->pc = 0x36641Cu;
    // 0x36641c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36641cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x366420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366424: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x366424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x366428: 0x80d95f0  j           func_3657C0
    ctx->pc = 0x366428u;
    ctx->pc = 0x36642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366428u;
    // 0x36642c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3657C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3657C0u, 0x366428u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x366430u;
label_366430:
    // 0x366430: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x366430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x366434: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x366434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366438: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x366438u;
    {
        const bool branch_taken_0x366438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366438u;
        // 0x36643c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366438) {
            ctx->pc = 0x3664F0u;
            goto label_3664f0;
        }
    }
    ctx->pc = 0x366440u;
    // 0x366440: 0x26040a80  addiu       $a0, $s0, 0xA80
    ctx->pc = 0x366440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2688));
    // 0x366444: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x366444u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366448: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x366448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36644c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x36644cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366450: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x366450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366454: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_366458:
    // 0x366458: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x366458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x36645c: 0x144b0009  bne         $v0, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36645Cu;
    {
        const bool branch_taken_0x36645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x366460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36645Cu;
        // 0x366460: 0x9085000c  lbu         $a1, 0xC($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36645c) {
            ctx->pc = 0x366484u;
            goto label_366484;
        }
    }
    ctx->pc = 0x366464u;
    // 0x366464: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x366464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x366468: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x366468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36646c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x36646cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x366470: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x366470u;
    {
        const bool branch_taken_0x366470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366470u;
        // 0x366474: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366470) {
            ctx->pc = 0x366488u;
            goto label_366488;
        }
    }
    ctx->pc = 0x366478u;
    // 0x366478: 0xa08a000c  sb          $t2, 0xC($a0)
    ctx->pc = 0x366478u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 10));
    // 0x36647c: 0xae09148c  sw          $t1, 0x148C($s0)
    ctx->pc = 0x36647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5260), GPR_U32(ctx, 9));
    // 0x366480: 0x9085000c  lbu         $a1, 0xC($a0)
    ctx->pc = 0x366480u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_366484:
    // 0x366484: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x366484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_366488:
    // 0x366488: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x366488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x36648c: 0x54480007  bnel        $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36648Cu;
    {
        const bool branch_taken_0x36648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x36648c) {
            ctx->pc = 0x366490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36648Cu;
            // 0x366490: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3664ACu;
            goto label_3664ac;
        }
    }
    ctx->pc = 0x366494u;
    // 0x366494: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x366494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x366498: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x366498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x36649c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x36649cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3664a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3664A0u;
    {
        const bool branch_taken_0x3664a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3664a0) {
            ctx->pc = 0x3664A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3664A0u;
            // 0x3664a4: 0xa080000c  sb          $zero, 0xC($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3664A8u;
            goto label_3664a8;
        }
    }
    ctx->pc = 0x3664A8u;
label_3664a8:
    // 0x3664a8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3664a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3664ac:
    // 0x3664ac: 0x4e1ffea  bgez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3664ACu;
    {
        const bool branch_taken_0x3664ac = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3664B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664ACu;
        // 0x3664b0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664ac) {
            ctx->pc = 0x366458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366458;
        }
    }
    ctx->pc = 0x3664B4u;
    // 0x3664b4: 0x8e021498  lw          $v0, 0x1498($s0)
    ctx->pc = 0x3664b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5272)));
    // 0x3664b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3664B8u;
    {
        const bool branch_taken_0x3664b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3664BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664B8u;
        // 0x3664bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664b8) {
            ctx->pc = 0x3664E0u;
            goto label_3664e0;
        }
    }
    ctx->pc = 0x3664C0u;
    // 0x3664c0: 0x8e05149c  lw          $a1, 0x149C($s0)
    ctx->pc = 0x3664c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5276)));
    // 0x3664c4: 0x86060038  lh          $a2, 0x38($s0)
    ctx->pc = 0x3664c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3664c8: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x3664c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x3664cc: 0x8607003a  lh          $a3, 0x3A($s0)
    ctx->pc = 0x3664ccu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x3664d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3664d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3664d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3664d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3664d8: 0xc0d96ae  jal         func_365AB8
    ctx->pc = 0x3664D8u;
    SET_GPR_U32(ctx, 31, 0x3664E0u);
    ctx->pc = 0x3664DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3664D8u;
    // 0x3664dc: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365AB8u, 0x3664D8u, 0x3664E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664E0u;
label_3664e0:
    // 0x3664e0: 0xc60009d8  lwc1        $f0, 0x9D8($s0)
    ctx->pc = 0x3664e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3664e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3664e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3664e8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3664e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x3664ec: 0xe60009d8  swc1        $f0, 0x9D8($s0)
    ctx->pc = 0x3664ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2520), bits); }
label_3664f0:
    // 0x3664f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3664f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3664f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3664f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3664f8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3664f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3664fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3664FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664FCu;
        // 0x366500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3664FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366504u;
    // 0x366504: 0x0  nop
    ctx->pc = 0x366504u;
    // NOP
    ctx->pc = 0x366508u;
}
