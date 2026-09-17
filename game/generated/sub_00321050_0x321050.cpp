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

// Function: sub_00321050
// Address: 0x321050 - 0x321118
void sub_00321050_0x321050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321050_0x321050");
#endif

    switch (ctx->pc) {
        case 0x321050u: goto label_321050;
        case 0x321054u: goto label_321054;
        case 0x321058u: goto label_321058;
        case 0x32105cu: goto label_32105c;
        case 0x321060u: goto label_321060;
        case 0x321064u: goto label_321064;
        case 0x321068u: goto label_321068;
        case 0x32106cu: goto label_32106c;
        case 0x321070u: goto label_321070;
        case 0x321074u: goto label_321074;
        case 0x321078u: goto label_321078;
        case 0x32107cu: goto label_32107c;
        case 0x321080u: goto label_321080;
        case 0x321084u: goto label_321084;
        case 0x321088u: goto label_321088;
        case 0x32108cu: goto label_32108c;
        case 0x321090u: goto label_321090;
        case 0x321094u: goto label_321094;
        case 0x321098u: goto label_321098;
        case 0x32109cu: goto label_32109c;
        case 0x3210a0u: goto label_3210a0;
        case 0x3210a4u: goto label_3210a4;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210acu: goto label_3210ac;
        case 0x3210b0u: goto label_3210b0;
        case 0x3210b4u: goto label_3210b4;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210bcu: goto label_3210bc;
        case 0x3210c0u: goto label_3210c0;
        case 0x3210c4u: goto label_3210c4;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210ccu: goto label_3210cc;
        case 0x3210d0u: goto label_3210d0;
        case 0x3210d4u: goto label_3210d4;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210dcu: goto label_3210dc;
        case 0x3210e0u: goto label_3210e0;
        case 0x3210e4u: goto label_3210e4;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210f0u: goto label_3210f0;
        case 0x3210f4u: goto label_3210f4;
        case 0x3210f8u: goto label_3210f8;
        case 0x3210fcu: goto label_3210fc;
        case 0x321100u: goto label_321100;
        case 0x321104u: goto label_321104;
        case 0x321108u: goto label_321108;
        case 0x32110cu: goto label_32110c;
        case 0x321110u: goto label_321110;
        case 0x321114u: goto label_321114;
        default: break;
    }

    ctx->pc = 0x321050u;

label_321050:
    // 0x321050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_321054:
    // 0x321054: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_321058:
    // 0x321058: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_32105c:
    // 0x32105c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32105cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321060:
    // 0x321060: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x321060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_321064:
    // 0x321064: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_321068:
    // 0x321068: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32106c:
    // 0x32106c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32106cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321070:
    // 0x321070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321074:
    // 0x321074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x321074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321078:
    // 0x321078: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_32107c:
    if (ctx->pc == 0x32107Cu) {
        ctx->pc = 0x32107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321078u;
        // 0x32107c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321080u;
        goto label_321080;
    }
    ctx->pc = 0x321078u;
    {
        const bool branch_taken_0x321078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321078u;
        // 0x32107c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321078) {
            ctx->pc = 0x3210A0u;
            goto label_3210a0;
        }
    }
    ctx->pc = 0x321080u;
label_321080:
    // 0x321080: 0xc0cf246  jal         func_33C918
label_321084:
    if (ctx->pc == 0x321084u) {
        ctx->pc = 0x321084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321080u;
        // 0x321084: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321088u;
        goto label_321088;
    }
    ctx->pc = 0x321080u;
    SET_GPR_U32(ctx, 31, 0x321088u);
    ctx->pc = 0x321084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321080u;
    // 0x321084: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C918u, 0x321080u, 0x321088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321088u;
label_321088:
    // 0x321088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32108c:
    // 0x32108c: 0xc0ceaa6  jal         func_33AA98
label_321090:
    if (ctx->pc == 0x321090u) {
        ctx->pc = 0x321090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32108Cu;
        // 0x321090: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321094u;
        goto label_321094;
    }
    ctx->pc = 0x32108Cu;
    SET_GPR_U32(ctx, 31, 0x321094u);
    ctx->pc = 0x321090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32108Cu;
    // 0x321090: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA98u, 0x32108Cu, 0x321094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321094u;
label_321094:
    // 0x321094: 0x10000008  b           . + 4 + (0x8 << 2)
label_321098:
    if (ctx->pc == 0x321098u) {
        ctx->pc = 0x321098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321094u;
        // 0x321098: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32109Cu;
        goto label_32109c;
    }
    ctx->pc = 0x321094u;
    {
        const bool branch_taken_0x321094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321094u;
        // 0x321098: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321094) {
            ctx->pc = 0x3210B8u;
            goto label_3210b8;
        }
    }
    ctx->pc = 0x32109Cu;
label_32109c:
    // 0x32109c: 0x0  nop
    ctx->pc = 0x32109cu;
    // NOP
label_3210a0:
    // 0x3210a0: 0xc0cf246  jal         func_33C918
label_3210a4:
    if (ctx->pc == 0x3210A4u) {
        ctx->pc = 0x3210A8u;
        goto label_3210a8;
    }
    ctx->pc = 0x3210A0u;
    SET_GPR_U32(ctx, 31, 0x3210A8u);
    ctx->pc = 0x33C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C918u, 0x3210A0u, 0x3210A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210A8u;
label_3210a8:
    // 0x3210a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3210a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3210ac:
    // 0x3210ac: 0xc0ceaa6  jal         func_33AA98
label_3210b0:
    if (ctx->pc == 0x3210B0u) {
        ctx->pc = 0x3210B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210ACu;
        // 0x3210b0: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210B4u;
        goto label_3210b4;
    }
    ctx->pc = 0x3210ACu;
    SET_GPR_U32(ctx, 31, 0x3210B4u);
    ctx->pc = 0x3210B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210ACu;
    // 0x3210b0: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA98u, 0x3210ACu, 0x3210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210B4u;
label_3210b4:
    // 0x3210b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3210b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3210b8:
    // 0x3210b8: 0x26080004  addiu       $t0, $s0, 0x4
    ctx->pc = 0x3210b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3210bc:
    // 0x3210bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3210bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3210c0:
    // 0x3210c0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3210c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3210c4:
    // 0x3210c4: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x3210c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_3210c8:
    // 0x3210c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3210c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3210cc:
    // 0x3210cc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3210ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3210d0:
    // 0x3210d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3210d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3210d4:
    // 0x3210d4: 0x40f809  jalr        $v0
label_3210d8:
    if (ctx->pc == 0x3210D8u) {
        ctx->pc = 0x3210D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D4u;
        // 0x3210d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210DCu;
        goto label_3210dc;
    }
    ctx->pc = 0x3210D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3210DCu);
        ctx->pc = 0x3210D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D4u;
        // 0x3210d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210D4u, 0x3210DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3210DCu;
label_3210dc:
    // 0x3210dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3210dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_3210e0:
    // 0x3210e0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3210e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3210e4:
    // 0x3210e4: 0xc0cbf46  jal         func_32FD18
label_3210e8:
    if (ctx->pc == 0x3210E8u) {
        ctx->pc = 0x3210E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210E4u;
        // 0x3210e8: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210ECu;
        goto label_3210ec;
    }
    ctx->pc = 0x3210E4u;
    SET_GPR_U32(ctx, 31, 0x3210ECu);
    ctx->pc = 0x3210E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210E4u;
    // 0x3210e8: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD18u, 0x3210E4u, 0x3210ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210ECu;
label_3210ec:
    // 0x3210ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3210ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3210f0:
    // 0x3210f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3210f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3210f4:
    // 0x3210f4: 0xc0c847c  jal         func_3211F0
label_3210f8:
    if (ctx->pc == 0x3210F8u) {
        ctx->pc = 0x3210F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210F4u;
        // 0x3210f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210FCu;
        goto label_3210fc;
    }
    ctx->pc = 0x3210F4u;
    SET_GPR_U32(ctx, 31, 0x3210FCu);
    ctx->pc = 0x3210F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3210F4u;
    // 0x3210f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211F0u, 0x3210F4u, 0x3210FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3210FCu;
label_3210fc:
    // 0x3210fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3210fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321100:
    // 0x321100: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_321104:
    // 0x321104: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_321108:
    // 0x321108: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x321108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32110c:
    // 0x32110c: 0x3e00008  jr          $ra
label_321110:
    if (ctx->pc == 0x321110u) {
        ctx->pc = 0x321110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32110Cu;
        // 0x321110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321114u;
        goto label_321114;
    }
    ctx->pc = 0x32110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32110Cu;
        // 0x321110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32110Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321114u;
label_321114:
    // 0x321114: 0x0  nop
    ctx->pc = 0x321114u;
    // NOP
    ctx->pc = 0x321118u;
}
