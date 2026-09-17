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

// Function: sub_003117A0
// Address: 0x3117a0 - 0x311978
void sub_003117A0_0x3117a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003117A0_0x3117a0");
#endif

    switch (ctx->pc) {
        case 0x3117d0u: goto label_3117d0;
        default: break;
    }

    ctx->pc = 0x3117a0u;

    // 0x3117a0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3117a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3117a4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3117a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3117a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3117ac: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x3117acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3117b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3117b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3117b4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3117b4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x3117b8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x3117b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3117bc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3117bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3117c0: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x3117c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3117c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3117C4u;
    {
        const bool branch_taken_0x3117c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117C4u;
        // 0x3117c8: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117c4) {
            ctx->pc = 0x311824u;
            goto label_311824;
        }
    }
    ctx->pc = 0x3117CCu;
    // 0x3117cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3117ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3117d0:
    // 0x3117d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3117d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3117d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3117D4u;
    {
        const bool branch_taken_0x3117d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3117d4) {
            ctx->pc = 0x3117E8u;
            goto label_3117e8;
        }
    }
    ctx->pc = 0x3117DCu;
    // 0x3117dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3117DCu;
    {
        const bool branch_taken_0x3117dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3117E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117DCu;
        // 0x3117e0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117dc) {
            ctx->pc = 0x3117F4u;
            goto label_3117f4;
        }
    }
    ctx->pc = 0x3117E4u;
    // 0x3117e4: 0x0  nop
    ctx->pc = 0x3117e4u;
    // NOP
label_3117e8:
    // 0x3117e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3117e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3117ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3117ECu;
    {
        const bool branch_taken_0x3117ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3117ec) {
            ctx->pc = 0x3117F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3117ECu;
            // 0x3117f0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117F4u;
            goto label_3117f4;
        }
    }
    ctx->pc = 0x3117F4u;
label_3117f4:
    // 0x3117f4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3117f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3117f8: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3117f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3117fc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x3117fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311800: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x311800u;
    {
        const bool branch_taken_0x311800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x311804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311800u;
        // 0x311804: 0xa3102b  sltu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311800) {
            ctx->pc = 0x311810u;
            goto label_311810;
        }
    }
    ctx->pc = 0x311808u;
    // 0x311808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x311808u;
    {
        const bool branch_taken_0x311808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311808u;
        // 0x31180c: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x311808) {
            ctx->pc = 0x31181Cu;
            goto label_31181c;
        }
    }
    ctx->pc = 0x311810u;
label_311810:
    // 0x311810: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x311810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311814: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x311814u;
    {
        const bool branch_taken_0x311814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311814) {
            ctx->pc = 0x311818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311814u;
            // 0x311818: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31181Cu;
            goto label_31181c;
        }
    }
    ctx->pc = 0x31181Cu;
label_31181c:
    // 0x31181c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31181Cu;
    {
        const bool branch_taken_0x31181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31181c) {
            ctx->pc = 0x311820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31181Cu;
            // 0x311820: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3117d0;
        }
    }
    ctx->pc = 0x311824u;
label_311824:
    // 0x311824: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x311824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311828: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x311828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31182c: 0x4501004f  bc1t        . + 4 + (0x4F << 2)
    ctx->pc = 0x31182Cu;
    {
        const bool branch_taken_0x31182c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31182Cu;
        // 0x311830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31182c) {
            ctx->pc = 0x31196Cu;
            goto label_31196c;
        }
    }
    ctx->pc = 0x311834u;
    // 0x311834: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x311834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311838: 0x4501004c  bc1t        . + 4 + (0x4C << 2)
    ctx->pc = 0x311838u;
    {
        const bool branch_taken_0x311838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311838) {
            ctx->pc = 0x31196Cu;
            goto label_31196c;
        }
    }
    ctx->pc = 0x311840u;
    // 0x311840: 0xc78195c0  lwc1        $f1, -0x6A40($gp)
    ctx->pc = 0x311840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311844: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x311844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311848: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x311848u;
    {
        const bool branch_taken_0x311848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x311848) {
            ctx->pc = 0x31196Cu;
            goto label_31196c;
        }
    }
    ctx->pc = 0x311850u;
    // 0x311850: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x311850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311854: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x311854u;
    {
        const bool branch_taken_0x311854 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x311858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311854u;
        // 0x311858: 0x8f85c54c  lw          $a1, -0x3AB4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311854) {
            ctx->pc = 0x31196Cu;
            goto label_31196c;
        }
    }
    ctx->pc = 0x31185Cu;
    // 0x31185c: 0xc78195c4  lwc1        $f1, -0x6A3C($gp)
    ctx->pc = 0x31185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x311860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311864: 0x8f88c544  lw          $t0, -0x3ABC($gp)
    ctx->pc = 0x311864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x311868: 0x250cffff  addiu       $t4, $t0, -0x1
    ctx->pc = 0x311868u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x31186c: 0x46000164  .word       0x46000164                   # cvt.w.s     $f5, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31186cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x311870: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x311870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x311874: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x311874u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x311878: 0x184182a  slt         $v1, $t4, $a0
    ctx->pc = 0x311878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31187c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31187Cu;
    {
        const bool branch_taken_0x31187c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31187c) {
            ctx->pc = 0x311880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31187Cu;
            // 0x311880: 0x46012000  add.s       $f0, $f4, $f1 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311890u;
            goto label_311890;
        }
    }
    ctx->pc = 0x311884u;
    // 0x311884: 0xaf84cb9c  sw          $a0, -0x3464($gp)
    ctx->pc = 0x311884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953884), GPR_U32(ctx, 4));
    // 0x311888: 0x3e00008  jr          $ra
    ctx->pc = 0x311888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311888u;
        // 0x31188c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311890u;
label_311890:
    // 0x311890: 0x8f86c550  lw          $a2, -0x3AB0($gp)
    ctx->pc = 0x311890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x311894: 0x8f8ac548  lw          $t2, -0x3AB8($gp)
    ctx->pc = 0x311894u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x311898: 0x254bffff  addiu       $t3, $t2, -0x1
    ctx->pc = 0x311898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x31189c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31189cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3118a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3118a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3118a4: 0x464823  subu        $t1, $v0, $a2
    ctx->pc = 0x3118a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3118a8: 0x169182a  slt         $v1, $t3, $t1
    ctx->pc = 0x3118a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3118ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3118ACu;
    {
        const bool branch_taken_0x3118ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118ACu;
        // 0x3118b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118ac) {
            ctx->pc = 0x3118C0u;
            goto label_3118c0;
        }
    }
    ctx->pc = 0x3118B4u;
    // 0x3118b4: 0xaf84cb9c  sw          $a0, -0x3464($gp)
    ctx->pc = 0x3118b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953884), GPR_U32(ctx, 4));
    // 0x3118b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3118B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3118BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118B8u;
        // 0x3118bc: 0xaf89cba4  sw          $t1, -0x345C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953892), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3118B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3118C0u;
label_3118c0:
    // 0x3118c0: 0xc78195c8  lwc1        $f1, -0x6A38($gp)
    ctx->pc = 0x3118c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3118c4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3118c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3118c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3118c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3118cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3118ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3118d0: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x3118d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3118d4: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3118D4u;
    {
        const bool branch_taken_0x3118d4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x3118d4) {
            ctx->pc = 0x3118D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3118D4u;
            // 0x3118d8: 0x46011801  sub.s       $f0, $f3, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118F0u;
            goto label_3118f0;
        }
    }
    ctx->pc = 0x3118DCu;
    // 0x3118dc: 0xaf84cb9c  sw          $a0, -0x3464($gp)
    ctx->pc = 0x3118dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953884), GPR_U32(ctx, 4));
    // 0x3118e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3118e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3118e4: 0xaf89cba4  sw          $t1, -0x345C($gp)
    ctx->pc = 0x3118e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953892), GPR_U32(ctx, 9));
    // 0x3118e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3118E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118E8u;
        // 0x3118ec: 0xaf85cba0  sw          $a1, -0x3460($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953888), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3118E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3118F0u;
label_3118f0:
    // 0x3118f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3118f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3118f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3118f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3118f8: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x3118f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3118fc: 0x4e30008  bgezl       $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3118FCu;
    {
        const bool branch_taken_0x3118fc = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x3118fc) {
            ctx->pc = 0x311900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3118FCu;
            // 0x311900: 0xa8102a  slt         $v0, $a1, $t0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x311920u;
            goto label_311920;
        }
    }
    ctx->pc = 0x311904u;
    // 0x311904: 0xaf84cb9c  sw          $a0, -0x3464($gp)
    ctx->pc = 0x311904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953884), GPR_U32(ctx, 4));
    // 0x311908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31190c: 0xaf89cba4  sw          $t1, -0x345C($gp)
    ctx->pc = 0x31190cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953892), GPR_U32(ctx, 9));
    // 0x311910: 0xaf85cba0  sw          $a1, -0x3460($gp)
    ctx->pc = 0x311910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953888), GPR_U32(ctx, 5));
    // 0x311914: 0x3e00008  jr          $ra
    ctx->pc = 0x311914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311914u;
        // 0x311918: 0xaf87cba8  sw          $a3, -0x3458($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953896), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31191Cu;
    // 0x31191c: 0x0  nop
    ctx->pc = 0x31191cu;
    // NOP
label_311920:
    // 0x311920: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x311920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311924: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x311924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x311928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x311928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31192c: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x31192cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x311930: 0xea102a  slt         $v0, $a3, $t2
    ctx->pc = 0x311930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x311934: 0x83300a  movz        $a2, $a0, $v1
    ctx->pc = 0x311934u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x311938: 0x29240000  slti        $a0, $t1, 0x0
    ctx->pc = 0x311938u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31193c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31193cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311940: 0x162380a  movz        $a3, $t3, $v0
    ctx->pc = 0x311940u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 11));
    // 0x311944: 0x124280a  movz        $a1, $t1, $a0
    ctx->pc = 0x311944u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    // 0x311948: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x311948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31194c: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x31194cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x311950: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x311950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x311954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311958: 0xaf86cb9c  sw          $a2, -0x3464($gp)
    ctx->pc = 0x311958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953884), GPR_U32(ctx, 6));
    // 0x31195c: 0xaf85cba4  sw          $a1, -0x345C($gp)
    ctx->pc = 0x31195cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953892), GPR_U32(ctx, 5));
    // 0x311960: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x311960u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x311964: 0xaf88cba0  sw          $t0, -0x3460($gp)
    ctx->pc = 0x311964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953888), GPR_U32(ctx, 8));
    // 0x311968: 0xaf87cba8  sw          $a3, -0x3458($gp)
    ctx->pc = 0x311968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953896), GPR_U32(ctx, 7));
label_31196c:
    // 0x31196c: 0x3e00008  jr          $ra
    ctx->pc = 0x31196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311974u;
    // 0x311974: 0x0  nop
    ctx->pc = 0x311974u;
    // NOP
    ctx->pc = 0x311978u;
}
