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

// Function: sub_0033DBF8
// Address: 0x33dbf8 - 0x33dc80
void sub_0033DBF8_0x33dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DBF8_0x33dbf8");
#endif

    switch (ctx->pc) {
        case 0x33dbf8u: goto label_33dbf8;
        case 0x33dbfcu: goto label_33dbfc;
        case 0x33dc00u: goto label_33dc00;
        case 0x33dc04u: goto label_33dc04;
        case 0x33dc08u: goto label_33dc08;
        case 0x33dc0cu: goto label_33dc0c;
        case 0x33dc10u: goto label_33dc10;
        case 0x33dc14u: goto label_33dc14;
        case 0x33dc18u: goto label_33dc18;
        case 0x33dc1cu: goto label_33dc1c;
        case 0x33dc20u: goto label_33dc20;
        case 0x33dc24u: goto label_33dc24;
        case 0x33dc28u: goto label_33dc28;
        case 0x33dc2cu: goto label_33dc2c;
        case 0x33dc30u: goto label_33dc30;
        case 0x33dc34u: goto label_33dc34;
        case 0x33dc38u: goto label_33dc38;
        case 0x33dc3cu: goto label_33dc3c;
        case 0x33dc40u: goto label_33dc40;
        case 0x33dc44u: goto label_33dc44;
        case 0x33dc48u: goto label_33dc48;
        case 0x33dc4cu: goto label_33dc4c;
        case 0x33dc50u: goto label_33dc50;
        case 0x33dc54u: goto label_33dc54;
        case 0x33dc58u: goto label_33dc58;
        case 0x33dc5cu: goto label_33dc5c;
        case 0x33dc60u: goto label_33dc60;
        case 0x33dc64u: goto label_33dc64;
        case 0x33dc68u: goto label_33dc68;
        case 0x33dc6cu: goto label_33dc6c;
        case 0x33dc70u: goto label_33dc70;
        case 0x33dc74u: goto label_33dc74;
        case 0x33dc78u: goto label_33dc78;
        case 0x33dc7cu: goto label_33dc7c;
        default: break;
    }

    ctx->pc = 0x33dbf8u;

label_33dbf8:
    // 0x33dbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33dbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33dbfc:
    // 0x33dbfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33dc00:
    // 0x33dc00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33dc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33dc04:
    // 0x33dc04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33dc08:
    // 0x33dc08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33dc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33dc0c:
    // 0x33dc0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33dc10:
    // 0x33dc10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33dc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33dc14:
    // 0x33dc14: 0xc0cf424  jal         func_33D090
label_33dc18:
    if (ctx->pc == 0x33DC18u) {
        ctx->pc = 0x33DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC14u;
        // 0x33dc18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC1Cu;
        goto label_33dc1c;
    }
    ctx->pc = 0x33DC14u;
    SET_GPR_U32(ctx, 31, 0x33DC1Cu);
    ctx->pc = 0x33DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DC14u;
    // 0x33dc18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D090u, 0x33DC14u, 0x33DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DC1Cu;
label_33dc1c:
    // 0x33dc1c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_33dc20:
    if (ctx->pc == 0x33DC20u) {
        ctx->pc = 0x33DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC1Cu;
        // 0x33dc20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC24u;
        goto label_33dc24;
    }
    ctx->pc = 0x33DC1Cu;
    {
        const bool branch_taken_0x33dc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dc1c) {
            ctx->pc = 0x33DC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DC1Cu;
            // 0x33dc20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DC6Cu;
            goto label_33dc6c;
        }
    }
    ctx->pc = 0x33DC24u;
label_33dc24:
    // 0x33dc24: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33dc28:
    // 0x33dc28: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x33dc28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_33dc2c:
    // 0x33dc2c: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x33dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_33dc30:
    // 0x33dc30: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x33dc30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_33dc34:
    // 0x33dc34: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33dc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33dc38:
    // 0x33dc38: 0x2463006  srlv        $a2, $a2, $s2
    ctx->pc = 0x33dc38u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
label_33dc3c:
    // 0x33dc3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33dc40:
    // 0x33dc40: 0x2452806  srlv        $a1, $a1, $s2
    ctx->pc = 0x33dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 18) & 0x1F));
label_33dc44:
    // 0x33dc44: 0x60f809  jalr        $v1
label_33dc48:
    if (ctx->pc == 0x33DC48u) {
        ctx->pc = 0x33DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC44u;
        // 0x33dc48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC4Cu;
        goto label_33dc4c;
    }
    ctx->pc = 0x33DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DC4Cu);
        ctx->pc = 0x33DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC44u;
        // 0x33dc48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC44u, 0x33DC4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC4Cu;
label_33dc4c:
    // 0x33dc4c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33dc50:
    // 0x33dc50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33dc54:
    // 0x33dc54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33dc54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33dc58:
    // 0x33dc58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33dc5c:
    // 0x33dc5c: 0x60f809  jalr        $v1
label_33dc60:
    if (ctx->pc == 0x33DC60u) {
        ctx->pc = 0x33DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC5Cu;
        // 0x33dc60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC64u;
        goto label_33dc64;
    }
    ctx->pc = 0x33DC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33DC64u);
        ctx->pc = 0x33DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC5Cu;
        // 0x33dc60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC5Cu, 0x33DC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33DC64u;
label_33dc64:
    // 0x33dc64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33dc68:
    // 0x33dc68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33dc68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33dc6c:
    // 0x33dc6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33dc6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33dc70:
    // 0x33dc70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33dc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33dc74:
    // 0x33dc74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33dc78:
    // 0x33dc78: 0x3e00008  jr          $ra
label_33dc7c:
    if (ctx->pc == 0x33DC7Cu) {
        ctx->pc = 0x33DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC78u;
        // 0x33dc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33DC80u;
        goto label_fallthrough_0x33dc78;
    }
    ctx->pc = 0x33DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC78u;
        // 0x33dc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33dc78:
    ctx->pc = 0x33DC80u;
}
