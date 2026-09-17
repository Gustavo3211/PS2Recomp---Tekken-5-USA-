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

// Function: sub_00305070
// Address: 0x305070 - 0x305110
void sub_00305070_0x305070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305070_0x305070");
#endif

    switch (ctx->pc) {
        case 0x3050a4u: goto label_3050a4;
        case 0x3050b0u: goto label_3050b0;
        default: break;
    }

    ctx->pc = 0x305070u;

    // 0x305070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305074: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x305074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30507c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30507cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305080: 0x3c0410bf  lui         $a0, 0x10BF
    ctx->pc = 0x305080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4287 << 16));
    // 0x305084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305088: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x305088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30508c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30508cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305090: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x305090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305094: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x305094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x305098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30509c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x30509Cu;
    SET_GPR_U32(ctx, 31, 0x3050A4u);
    ctx->pc = 0x3050A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30509Cu;
    // 0x3050a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x30509Cu, 0x3050A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050A4u;
label_3050a4:
    // 0x3050a4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3050a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3050a8: 0xc0bff3c  jal         func_2FFCF0
    ctx->pc = 0x3050A8u;
    SET_GPR_U32(ctx, 31, 0x3050B0u);
    ctx->pc = 0x3050ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050A8u;
    // 0x3050ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFCF0u, 0x3050A8u, 0x3050B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050B0u;
label_3050b0:
    // 0x3050b0: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x3050b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x3050b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3050b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3050b8: 0xc781958c  lwc1        $f1, -0x6A74($gp)
    ctx->pc = 0x3050b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3050bc: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x3050bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x3050c0: 0xe62100dc  swc1        $f1, 0xDC($s1)
    ctx->pc = 0x3050c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x3050c4: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x3050c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3050c8: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x3050c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x3050cc: 0x2c43001c  sltiu       $v1, $v0, 0x1C
    ctx->pc = 0x3050ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3050d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3050D0u;
    {
        const bool branch_taken_0x3050d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050D0u;
        // 0x3050d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050d0) {
            ctx->pc = 0x305110u;
            return;
        }
    }
    ctx->pc = 0x3050D8u;
    // 0x3050d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3050d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3050dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3050dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3050e0: 0x8c632470  lw          $v1, 0x2470($v1)
    ctx->pc = 0x3050e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9328)));
    // 0x3050e4: 0x600008  jr          $v1
    ctx->pc = 0x3050E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3050F0u: goto label_3050f0;
            case 0x305100u: goto label_305100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3050E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3050ECu;
    // 0x3050ec: 0x0  nop
    ctx->pc = 0x3050ecu;
    // NOP
label_3050f0:
    // 0x3050f0: 0xc7809590  lwc1        $f0, -0x6A70($gp)
    ctx->pc = 0x3050f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3050f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3050F4u;
    {
        const bool branch_taken_0x3050f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3050F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3050F4u;
        // 0x3050f8: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3050f4) {
            ctx->pc = 0x305118u;
            return;
        }
    }
    ctx->pc = 0x3050FCu;
    // 0x3050fc: 0x0  nop
    ctx->pc = 0x3050fcu;
    // NOP
label_305100:
    // 0x305100: 0xc7809594  lwc1        $f0, -0x6A6C($gp)
    ctx->pc = 0x305100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x305104u;
    {
        const bool branch_taken_0x305104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305104u;
        // 0x305108: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305104) {
            ctx->pc = 0x305118u;
            return;
        }
    }
    ctx->pc = 0x30510Cu;
    // 0x30510c: 0x0  nop
    ctx->pc = 0x30510cu;
    // NOP
    ctx->pc = 0x305110u;
}
