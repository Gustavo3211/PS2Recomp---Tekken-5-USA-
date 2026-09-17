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

// Function: sub_0031E120
// Address: 0x31e120 - 0x31e190
void sub_0031E120_0x31e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E120_0x31e120");
#endif

    switch (ctx->pc) {
        case 0x31e120u: goto label_31e120;
        case 0x31e124u: goto label_31e124;
        case 0x31e128u: goto label_31e128;
        case 0x31e12cu: goto label_31e12c;
        case 0x31e130u: goto label_31e130;
        case 0x31e134u: goto label_31e134;
        case 0x31e138u: goto label_31e138;
        case 0x31e13cu: goto label_31e13c;
        case 0x31e140u: goto label_31e140;
        case 0x31e144u: goto label_31e144;
        case 0x31e148u: goto label_31e148;
        case 0x31e14cu: goto label_31e14c;
        case 0x31e150u: goto label_31e150;
        case 0x31e154u: goto label_31e154;
        case 0x31e158u: goto label_31e158;
        case 0x31e15cu: goto label_31e15c;
        case 0x31e160u: goto label_31e160;
        case 0x31e164u: goto label_31e164;
        case 0x31e168u: goto label_31e168;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e170u: goto label_31e170;
        case 0x31e174u: goto label_31e174;
        case 0x31e178u: goto label_31e178;
        case 0x31e17cu: goto label_31e17c;
        case 0x31e180u: goto label_31e180;
        case 0x31e184u: goto label_31e184;
        case 0x31e188u: goto label_31e188;
        case 0x31e18cu: goto label_31e18c;
        default: break;
    }

    ctx->pc = 0x31e120u;

label_31e120:
    // 0x31e120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31e124:
    // 0x31e124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31e128:
    // 0x31e128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31e12c:
    // 0x31e12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e130:
    // 0x31e130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e134:
    // 0x31e134: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x31e134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_31e138:
    // 0x31e138: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x31e138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31e13c:
    // 0x31e13c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_31e140:
    // 0x31e140: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31e140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31e144:
    // 0x31e144: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31e148:
    // 0x31e148: 0x40f809  jalr        $v0
label_31e14c:
    if (ctx->pc == 0x31E14Cu) {
        ctx->pc = 0x31E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E148u;
        // 0x31e14c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E150u;
        goto label_31e150;
    }
    ctx->pc = 0x31E148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E150u);
        ctx->pc = 0x31E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E148u;
        // 0x31e14c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E148u, 0x31E150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E150u;
label_31e150:
    // 0x31e150: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_31e154:
    if (ctx->pc == 0x31E154u) {
        ctx->pc = 0x31E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E150u;
        // 0x31e154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E158u;
        goto label_31e158;
    }
    ctx->pc = 0x31E150u;
    {
        const bool branch_taken_0x31e150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e150) {
            ctx->pc = 0x31E154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E150u;
            // 0x31e154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E158u;
label_31e158:
    // 0x31e158: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x31e158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_31e15c:
    // 0x31e15c: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x31e15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_31e160:
    // 0x31e160: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x31e160u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31e164:
    // 0x31e164: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x31e164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_31e168:
    // 0x31e168: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x31e168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_31e16c:
    // 0x31e16c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31e16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_31e170:
    // 0x31e170: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x31e170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_31e174:
    // 0x31e174: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_31e178:
    // 0x31e178: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_31e17c:
    // 0x31e17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e180:
    // 0x31e180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31e184:
    // 0x31e184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e188:
    // 0x31e188: 0x3e00008  jr          $ra
label_31e18c:
    if (ctx->pc == 0x31E18Cu) {
        ctx->pc = 0x31E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E188u;
        // 0x31e18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E190u;
        goto label_fallthrough_0x31e188;
    }
    ctx->pc = 0x31E188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E188u;
        // 0x31e18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e188:
    ctx->pc = 0x31E190u;
}
