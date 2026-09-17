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

// Function: sub_002B63C8
// Address: 0x2b63c8 - 0x2b65b0
void sub_002B63C8_0x2b63c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B63C8_0x2b63c8");
#endif

    switch (ctx->pc) {
        case 0x2b6418u: goto label_2b6418;
        case 0x2b6440u: goto label_2b6440;
        case 0x2b6488u: goto label_2b6488;
        case 0x2b64f8u: goto label_2b64f8;
        case 0x2b6548u: goto label_2b6548;
        case 0x2b6558u: goto label_2b6558;
        default: break;
    }

    ctx->pc = 0x2b63c8u;

label_2b63c8:
    // 0x2b63c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b63cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b63ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b63d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b63d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b63d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b63d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b63d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b63dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b63e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b63e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b63e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b63e8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2b63e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2b63f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b63f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b63f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b63f8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2b63f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2b63fc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2b63fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b6400: 0x8e54007c  lw          $s4, 0x7C($s2)
    ctx->pc = 0x2b6400u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2b6404: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B6404u;
    {
        const bool branch_taken_0x2b6404 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2B6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6404u;
        // 0x2b6408: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6404) {
            ctx->pc = 0x2B6494u;
            goto label_2b6494;
        }
    }
    ctx->pc = 0x2B640Cu;
    // 0x2b640c: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x2b640cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b6410: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b6410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b6414: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2b6414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2b6418:
    // 0x2b6418: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2b6418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2b641c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b641cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b6420: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2b6420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b6424: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6428: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6428u;
    {
        const bool branch_taken_0x2b6428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6428u;
        // 0x2b642c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6428) {
            ctx->pc = 0x2B6468u;
            goto label_2b6468;
        }
    }
    ctx->pc = 0x2B6430u;
    // 0x2b6430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6434: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2b6434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6438: 0xc0ad822  jal         func_2B6088
    ctx->pc = 0x2B6438u;
    SET_GPR_U32(ctx, 31, 0x2B6440u);
    ctx->pc = 0x2B643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6438u;
    // 0x2b643c: 0x36a71000  ori         $a3, $s5, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6088u, 0x2B6438u, 0x2B6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6440u;
label_2b6440:
    // 0x2b6440: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6444: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6448: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x2b6448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b644c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b644cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6450: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b6450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b6454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6458: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b645c: 0xe4410068  swc1        $f1, 0x68($v0)
    ctx->pc = 0x2b645cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b6460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B6460u;
    {
        const bool branch_taken_0x2b6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6460u;
        // 0x2b6464: 0x234102a  slt         $v0, $s1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6460) {
            ctx->pc = 0x2B648Cu;
            goto label_2b648c;
        }
    }
    ctx->pc = 0x2B6468u;
label_2b6468:
    // 0x2b6468: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2b6468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b646c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x2b646cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b6470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b6470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6474: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b6474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b6478: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b647c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2b647cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b6480: 0xc0ad8f2  jal         func_2B63C8
    ctx->pc = 0x2B6480u;
    SET_GPR_U32(ctx, 31, 0x2B6488u);
    ctx->pc = 0x2B6484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6480u;
    // 0x2b6484: 0x8e070008  lw          $a3, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B63C8u;
    goto label_2b63c8;
    ctx->pc = 0x2B6488u;
label_2b6488:
    // 0x2b6488: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2b6488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2b648c:
    // 0x2b648c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B648Cu;
    {
        const bool branch_taken_0x2b648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b648c) {
            ctx->pc = 0x2B6490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B648Cu;
            // 0x2b6490: 0x8e430078  lw          $v1, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6418;
        }
    }
    ctx->pc = 0x2B6494u;
label_2b6494:
    // 0x2b6494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b649c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b649cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b64a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b64a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b64a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b64a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b64a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b64a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b64ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b64acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b64b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2b64b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b64b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b64b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b64b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B64B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B64BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64B8u;
        // 0x2b64bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B64B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B64C0u;
    // 0x2b64c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b64c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b64c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b64cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b64ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b64d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b64d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b64d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b64dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b64dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b64e0: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2b64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2b64e4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2b64e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b64e8: 0x6000027  bltz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B64E8u;
    {
        const bool branch_taken_0x2b64e8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2B64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64E8u;
        // 0x2b64ec: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64e8) {
            ctx->pc = 0x2B6588u;
            goto label_2b6588;
        }
    }
    ctx->pc = 0x2B64F0u;
    // 0x2b64f0: 0x2413fffe  addiu       $s3, $zero, -0x2
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b64f4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x2b64f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2b64f8:
    // 0x2b64f8: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x2b64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2b64fc: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2b64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2b6500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6504: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2b6504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b6508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b650c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2b650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6510: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2b6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b6514: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2b6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b6518: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B6518u;
    {
        const bool branch_taken_0x2b6518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6518) {
            ctx->pc = 0x2B651Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6518u;
            // 0x2b651c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6580u;
            goto label_2b6580;
        }
    }
    ctx->pc = 0x2B6520u;
    // 0x2b6520: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2b6524: 0x10540015  beq         $v0, $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B6524u;
    {
        const bool branch_taken_0x2b6524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6524u;
        // 0x2b6528: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6524) {
            ctx->pc = 0x2B657Cu;
            goto label_2b657c;
        }
    }
    ctx->pc = 0x2B652Cu;
    // 0x2b652c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B652Cu;
    {
        const bool branch_taken_0x2b652c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b652c) {
            ctx->pc = 0x2B6530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B652Cu;
            // 0x2b6530: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6580u;
            goto label_2b6580;
        }
    }
    ctx->pc = 0x2B6534u;
    // 0x2b6534: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2b6534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2b6538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6538u;
    {
        const bool branch_taken_0x2b6538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6538) {
            ctx->pc = 0x2B6550u;
            goto label_2b6550;
        }
    }
    ctx->pc = 0x2B6540u;
    // 0x2b6540: 0xc0ac02c  jal         func_2B00B0
    ctx->pc = 0x2B6540u;
    SET_GPR_U32(ctx, 31, 0x2B6548u);
    ctx->pc = 0x2B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00B0u, 0x2B6540u, 0x2B6548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6548u;
label_2b6548:
    // 0x2b6548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6548u;
    {
        const bool branch_taken_0x2b6548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6548u;
        // 0x2b654c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6548) {
            ctx->pc = 0x2B655Cu;
            goto label_2b655c;
        }
    }
    ctx->pc = 0x2B6550u;
label_2b6550:
    // 0x2b6550: 0xc0ac628  jal         func_2B18A0
    ctx->pc = 0x2B6550u;
    SET_GPR_U32(ctx, 31, 0x2B6558u);
    ctx->pc = 0x2B18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18A0u, 0x2B6550u, 0x2B6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6558u;
label_2b6558:
    // 0x2b6558: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2b6558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2b655c:
    // 0x2b655c: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x2b655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x2b6560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b6564: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2b6564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b6568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b6568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b656c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6570: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2b6570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b6574: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x2b6574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x2b6578: 0xac830074  sw          $v1, 0x74($a0)
    ctx->pc = 0x2b6578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
label_2b657c:
    // 0x2b657c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b657cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b6580:
    // 0x2b6580: 0x601ffdd  bgez        $s0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2B6580u;
    {
        const bool branch_taken_0x2b6580 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2B6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6580u;
        // 0x2b6584: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6580) {
            ctx->pc = 0x2B64F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B6588u;
label_2b6588:
    // 0x2b6588: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x2b6588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x2b658c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b658cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6594: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b659c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b659cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b65a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b65a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b65a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65A4u;
        // 0x2b65a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65ACu;
    // 0x2b65ac: 0x0  nop
    ctx->pc = 0x2b65acu;
    // NOP
    ctx->pc = 0x2b65b0u;
}
