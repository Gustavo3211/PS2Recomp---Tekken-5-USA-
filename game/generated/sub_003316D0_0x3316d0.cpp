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

// Function: sub_003316D0
// Address: 0x3316d0 - 0x331750
void sub_003316D0_0x3316d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003316D0_0x3316d0");
#endif

    switch (ctx->pc) {
        case 0x331730u: goto label_331730;
        case 0x331740u: goto label_331740;
        default: break;
    }

    ctx->pc = 0x3316d0u;

    // 0x3316d0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3316d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
    // 0x3316d4: 0x27a20448  addiu       $v0, $sp, 0x448
    ctx->pc = 0x3316d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
    // 0x3316d8: 0xffa50448  sd          $a1, 0x448($sp)
    ctx->pc = 0x3316d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 5));
    // 0x3316dc: 0xffa60450  sd          $a2, 0x450($sp)
    ctx->pc = 0x3316dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 6));
    // 0x3316e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3316e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316e4: 0xffa70458  sd          $a3, 0x458($sp)
    ctx->pc = 0x3316e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 7));
    // 0x3316e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3316e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3316ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3316f0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3316f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3316f4: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3316f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
    // 0x3316f8: 0xffa80460  sd          $t0, 0x460($sp)
    ctx->pc = 0x3316f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 8));
    // 0x3316fc: 0xffa90468  sd          $t1, 0x468($sp)
    ctx->pc = 0x3316fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1128), GPR_U64(ctx, 9));
    // 0x331700: 0xffaa0470  sd          $t2, 0x470($sp)
    ctx->pc = 0x331700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 10));
    // 0x331704: 0xffab0478  sd          $t3, 0x478($sp)
    ctx->pc = 0x331704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 11));
    // 0x331708: 0xe7ac0428  swc1        $f12, 0x428($sp)
    ctx->pc = 0x331708u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
    // 0x33170c: 0xe7ad042c  swc1        $f13, 0x42C($sp)
    ctx->pc = 0x33170cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
    // 0x331710: 0xe7ae0430  swc1        $f14, 0x430($sp)
    ctx->pc = 0x331710u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
    // 0x331714: 0xe7af0434  swc1        $f15, 0x434($sp)
    ctx->pc = 0x331714u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
    // 0x331718: 0xe7b00438  swc1        $f16, 0x438($sp)
    ctx->pc = 0x331718u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
    // 0x33171c: 0xe7b1043c  swc1        $f17, 0x43C($sp)
    ctx->pc = 0x33171cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
    // 0x331720: 0xe7b20440  swc1        $f18, 0x440($sp)
    ctx->pc = 0x331720u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    // 0x331724: 0xe7b30444  swc1        $f19, 0x444($sp)
    ctx->pc = 0x331724u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
    // 0x331728: 0xc0d0cfc  jal         func_3433F0
    ctx->pc = 0x331728u;
    SET_GPR_U32(ctx, 31, 0x331730u);
    ctx->pc = 0x33172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331728u;
    // 0x33172c: 0xafa20400  sw          $v0, 0x400($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433F0u, 0x331728u, 0x331730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331730u;
label_331730:
    // 0x331730: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x331730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x331734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x331734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331738: 0xc0cc6f0  jal         func_331BC0
    ctx->pc = 0x331738u;
    SET_GPR_U32(ctx, 31, 0x331740u);
    ctx->pc = 0x33173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331738u;
    // 0x33173c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BC0u, 0x331738u, 0x331740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331740u;
label_331740:
    // 0x331740: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x331740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x331744: 0x3e00008  jr          $ra
    ctx->pc = 0x331744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331744u;
        // 0x331748: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33174Cu;
    // 0x33174c: 0x0  nop
    ctx->pc = 0x33174cu;
    // NOP
    ctx->pc = 0x331750u;
}
