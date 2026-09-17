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

// Function: sub_0049FA98
// Address: 0x49fa98 - 0x49fbc0
void sub_0049FA98_0x49fa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FA98_0x49fa98");
#endif

    switch (ctx->pc) {
        case 0x49fb00u: goto label_49fb00;
        case 0x49fb38u: goto label_49fb38;
        case 0x49fb88u: goto label_49fb88;
        default: break;
    }

    ctx->pc = 0x49fa98u;

    // 0x49fa98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49fa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49fa9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49faa0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x49faa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x49faa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49faa8: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49faa8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49faac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49fab0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49fab0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49fab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49fab8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49fab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fabc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49fabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49fac0: 0x26100bb0  addiu       $s0, $s0, 0xBB0
    ctx->pc = 0x49fac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2992));
    // 0x49fac4: 0x26520bb4  addiu       $s2, $s2, 0xBB4
    ctx->pc = 0x49fac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2996));
    // 0x49fac8: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x49fac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x49facc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49faccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49fad0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fad4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fad8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fadc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fae0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fae4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fae8: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x49fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x49faec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49faf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49faf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49faf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49faf8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FAF8u;
    SET_GPR_U32(ctx, 31, 0x49FB00u);
    ctx->pc = 0x49FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FAF8u;
    // 0x49fafc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FAF8u, 0x49FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FB00u;
label_49fb00:
    // 0x49fb00: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fb04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fb08: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fb0c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x49fb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fb10: 0x8664011c  lh          $a0, 0x11C($s3)
    ctx->pc = 0x49fb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x49fb14: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x49fb14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fb18: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x49fb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x49fb1c: 0xa6630024  sh          $v1, 0x24($s3)
    ctx->pc = 0x49fb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fb20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x49fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fb24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49fb28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49fb2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49fb30: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FB30u;
    SET_GPR_U32(ctx, 31, 0x49FB38u);
    ctx->pc = 0x49FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FB30u;
    // 0x49fb34: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FB30u, 0x49FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FB38u;
label_49fb38:
    // 0x49fb38: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x49fb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fb3c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fb40: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x49fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49fb44: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x49fb44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x49fb48: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x49fb48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x49fb4c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x49fb4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fb50: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fb54: 0xa6640028  sh          $a0, 0x28($s3)
    ctx->pc = 0x49fb54u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x49fb58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fb5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fb60: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fb64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fb68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49fb6c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49fb6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49fb70: 0x21023  negu        $v0, $v0
    ctx->pc = 0x49fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49fb74: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49fb78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49fb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49fb7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49fb80: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49FB80u;
    SET_GPR_U32(ctx, 31, 0x49FB88u);
    ctx->pc = 0x49FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FB80u;
    // 0x49fb84: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49FB80u, 0x49FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FB88u;
label_49fb88:
    // 0x49fb88: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x49fb88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49fb8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x49fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x49fb90: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x49fb90u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x49fb94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49fb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fb98: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x49fb98u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x49fb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49fb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49fba0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x49fba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49fba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49fba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fba8: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x49fba8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x49fbac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49fbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fbb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49fbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49fbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x49FBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FBB4u;
        // 0x49fbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FBBCu;
    // 0x49fbbc: 0x0  nop
    ctx->pc = 0x49fbbcu;
    // NOP
    ctx->pc = 0x49fbc0u;
}
