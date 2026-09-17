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

// Function: sub_00243E70
// Address: 0x243e70 - 0x243f00
void sub_00243E70_0x243e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243E70_0x243e70");
#endif

    switch (ctx->pc) {
        case 0x243ed8u: goto label_243ed8;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ef0u: goto label_243ef0;
        default: break;
    }

    ctx->pc = 0x243e70u;

    // 0x243e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243e74: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x243E74u;
    {
        const bool branch_taken_0x243e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E74u;
        // 0x243e78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e74) {
            ctx->pc = 0x243EF0u;
            goto label_243ef0;
        }
    }
    ctx->pc = 0x243E7Cu;
    // 0x243e7c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x243e7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243e80: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x243e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x243e84: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E84u;
        // 0x243e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243EC8u;
            goto label_243ec8;
        }
    }
    ctx->pc = 0x243E8Cu;
    // 0x243e8c: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x243e90: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x243e94: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x243E94u;
    {
        const bool branch_taken_0x243e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E94u;
        // 0x243e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e94) {
            ctx->pc = 0x243EC8u;
            goto label_243ec8;
        }
    }
    ctx->pc = 0x243E9Cu;
    // 0x243e9c: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x243e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x243ea0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x243ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x243ea4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA4u;
        // 0x243ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243EC8u;
            goto label_243ec8;
        }
    }
    ctx->pc = 0x243EACu;
    // 0x243eac: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x243eacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x243eb0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x243eb4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243EB4u;
    {
        const bool branch_taken_0x243eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EB4u;
        // 0x243eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eb4) {
            ctx->pc = 0x243EC8u;
            goto label_243ec8;
        }
    }
    ctx->pc = 0x243EBCu;
    // 0x243ebc: 0x80820008  lb          $v0, 0x8($a0)
    ctx->pc = 0x243ebcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x243ec0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x243ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x243ec4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x243ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_243ec8:
    // 0x243ec8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x243EC8u;
    {
        const bool branch_taken_0x243ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC8u;
        // 0x243ecc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ec8) {
            ctx->pc = 0x243EF4u;
            goto label_243ef4;
        }
    }
    ctx->pc = 0x243ED0u;
    // 0x243ed0: 0xc0914ee  jal         func_2453B8
    ctx->pc = 0x243ED0u;
    SET_GPR_U32(ctx, 31, 0x243ED8u);
    ctx->pc = 0x2453B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2453B8u, 0x243ED0u, 0x243ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ED8u;
label_243ed8:
    // 0x243ed8: 0xc090334  jal         func_240CD0
    ctx->pc = 0x243ED8u;
    SET_GPR_U32(ctx, 31, 0x243EE0u);
    ctx->pc = 0x240CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240CD0u, 0x243ED8u, 0x243EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EE0u;
label_243ee0:
    // 0x243ee0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x243ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x243ee4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x243ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243ee8: 0xc090e98  jal         func_243A60
    ctx->pc = 0x243EE8u;
    SET_GPR_U32(ctx, 31, 0x243EF0u);
    ctx->pc = 0x243EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EE8u;
    // 0x243eec: 0xc44d0004  lwc1        $f13, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x243A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243A60u, 0x243EE8u, 0x243EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EF0u;
label_243ef0:
    // 0x243ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243ef4:
    // 0x243ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x243EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EF4u;
        // 0x243ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243EFCu;
    // 0x243efc: 0x0  nop
    ctx->pc = 0x243efcu;
    // NOP
    ctx->pc = 0x243f00u;
}
