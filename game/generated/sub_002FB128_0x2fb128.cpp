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

// Function: sub_002FB128
// Address: 0x2fb128 - 0x2fb1e0
void sub_002FB128_0x2fb128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB128_0x2fb128");
#endif

    switch (ctx->pc) {
        case 0x2fb168u: goto label_2fb168;
        default: break;
    }

    ctx->pc = 0x2fb128u;

    // 0x2fb128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fb128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb12c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2fb12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb130: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB130u;
    {
        const bool branch_taken_0x2fb130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB130u;
        // 0x2fb134: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb130) {
            ctx->pc = 0x2FB13Cu;
            goto label_2fb13c;
        }
    }
    ctx->pc = 0x2FB138u;
    // 0x2fb138: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2fb138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2fb13c:
    // 0x2fb13c: 0xc7809520  lwc1        $f0, -0x6AE0($gp)
    ctx->pc = 0x2fb13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb140: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2fb140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb144: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB144u;
    {
        const bool branch_taken_0x2fb144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB144u;
        // 0x2fb148: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb144) {
            ctx->pc = 0x2FB154u;
            goto label_2fb154;
        }
    }
    ctx->pc = 0x2FB14Cu;
    // 0x2fb14c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fb14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fb150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fb154:
    // 0x2fb154: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB154u;
    {
        const bool branch_taken_0x2fb154 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2FB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB154u;
        // 0x2fb158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb154) {
            ctx->pc = 0x2FB1A0u;
            goto label_2fb1a0;
        }
    }
    ctx->pc = 0x2FB15Cu;
    // 0x2fb15c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2fb15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2fb160: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2fb160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2fb164: 0x0  nop
    ctx->pc = 0x2fb164u;
    // NOP
label_2fb168:
    // 0x2fb168: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x2fb168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2fb16c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fb16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fb170: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2fb170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2fb174: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fb174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fb178: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fb17c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2fb17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb180: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB180u;
    {
        const bool branch_taken_0x2fb180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2FB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB180u;
        // 0x2fb184: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb180) {
            ctx->pc = 0x2FB194u;
            goto label_2fb194;
        }
    }
    ctx->pc = 0x2FB188u;
    // 0x2fb188: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2fb188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fb18c: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x2fb18cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2fb190: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2fb190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2fb194:
    // 0x2fb194: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2fb194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2fb198: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FB198u;
    {
        const bool branch_taken_0x2fb198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB198u;
        // 0x2fb19c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb198) {
            ctx->pc = 0x2FB168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb168;
        }
    }
    ctx->pc = 0x2FB1A0u;
label_2fb1a0:
    // 0x2fb1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB1A8u;
    // 0x2fb1a8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x2fb1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fb1ac: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB1ACu;
    {
        const bool branch_taken_0x2fb1ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1ACu;
        // 0x2fb1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1ac) {
            ctx->pc = 0x2FB1D4u;
            goto label_2fb1d4;
        }
    }
    ctx->pc = 0x2FB1B4u;
    // 0x2fb1b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fb1b8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2fb1b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fb1bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB1BCu;
    {
        const bool branch_taken_0x2fb1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb1bc) {
            ctx->pc = 0x2FB1D4u;
            goto label_2fb1d4;
        }
    }
    ctx->pc = 0x2FB1C4u;
    // 0x2fb1c4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2fb1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2fb1c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2fb1cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fb1d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2fb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2fb1d4:
    // 0x2fb1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB1DCu;
    // 0x2fb1dc: 0x0  nop
    ctx->pc = 0x2fb1dcu;
    // NOP
    ctx->pc = 0x2fb1e0u;
}
