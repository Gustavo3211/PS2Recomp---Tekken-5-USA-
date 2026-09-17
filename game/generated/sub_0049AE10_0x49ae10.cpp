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

// Function: sub_0049AE10
// Address: 0x49ae10 - 0x49af18
void sub_0049AE10_0x49ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049AE10_0x49ae10");
#endif

    switch (ctx->pc) {
        case 0x49ae2cu: goto label_49ae2c;
        case 0x49ae94u: goto label_49ae94;
        case 0x49ae9cu: goto label_49ae9c;
        case 0x49af00u: goto label_49af00;
        default: break;
    }

    ctx->pc = 0x49ae10u;

    // 0x49ae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49ae14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ae18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49ae1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49ae20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49ae24: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49AE24u;
    SET_GPR_U32(ctx, 31, 0x49AE2Cu);
    ctx->pc = 0x49AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AE24u;
    // 0x49ae28: 0x3c11ffff  lui         $s1, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49AE24u, 0x49AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE2Cu;
label_49ae2c:
    // 0x49ae2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ae30: 0x241000d8  addiu       $s0, $zero, 0xD8
    ctx->pc = 0x49ae30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x49ae34: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x49ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x49ae38: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x49ae38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
    // 0x49ae3c: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x49ae3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x49ae40: 0x24a57ea8  addiu       $a1, $a1, 0x7EA8
    ctx->pc = 0x49ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32424));
    // 0x49ae44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49ae44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49ae48: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49ae48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49ae4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ae50: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x49ae50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x49ae54: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x49ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x49ae58: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x49ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x49ae5c: 0x24847ec8  addiu       $a0, $a0, 0x7EC8
    ctx->pc = 0x49ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32456));
    // 0x49ae60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ae64: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x49ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x49ae68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ae6c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49ae6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49ae70: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x49ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x49ae74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49ae78: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ae7c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49ae80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ae84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49ae88: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49ae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49ae8c: 0xc123bf2  jal         func_48EFC8
    ctx->pc = 0x49AE8Cu;
    SET_GPR_U32(ctx, 31, 0x49AE94u);
    ctx->pc = 0x49AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AE8Cu;
    // 0x49ae90: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EFC8u, 0x49AE8Cu, 0x49AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE94u;
label_49ae94:
    // 0x49ae94: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49AE94u;
    SET_GPR_U32(ctx, 31, 0x49AE9Cu);
    ctx->pc = 0x49AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AE94u;
    // 0x49ae98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49AE94u, 0x49AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AE9Cu;
label_49ae9c:
    // 0x49ae9c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x49ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x49aea0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49aea4: 0x24a57eb8  addiu       $a1, $a1, 0x7EB8
    ctx->pc = 0x49aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32440));
    // 0x49aea8: 0x3c06000d  lui         $a2, 0xD
    ctx->pc = 0x49aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13 << 16));
    // 0x49aeac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49aeacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49aeb0: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x49aeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x49aeb4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49aeb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49aeb8: 0x34e70014  ori         $a3, $a3, 0x14
    ctx->pc = 0x49aeb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20);
    // 0x49aebc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x49aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x49aec0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49aec4: 0x24847f00  addiu       $a0, $a0, 0x7F00
    ctx->pc = 0x49aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32512));
    // 0x49aec8: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x49aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x49aecc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49aed0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x49aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x49aed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49aed8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49aedc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x49aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x49aee0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49aee4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49aee8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49aee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49aeec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49aef0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49aef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49aef4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49aef8: 0xc123bf2  jal         func_48EFC8
    ctx->pc = 0x49AEF8u;
    SET_GPR_U32(ctx, 31, 0x49AF00u);
    ctx->pc = 0x49AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AEF8u;
    // 0x49aefc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EFC8u, 0x49AEF8u, 0x49AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AF00u;
label_49af00:
    // 0x49af00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49af00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49af04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49af04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49af08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49af08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49af0c: 0x3e00008  jr          $ra
    ctx->pc = 0x49AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AF0Cu;
        // 0x49af10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AF14u;
    // 0x49af14: 0x0  nop
    ctx->pc = 0x49af14u;
    // NOP
    ctx->pc = 0x49af18u;
}
