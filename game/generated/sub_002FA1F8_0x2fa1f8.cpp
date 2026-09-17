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

// Function: sub_002FA1F8
// Address: 0x2fa1f8 - 0x2fa360
void sub_002FA1F8_0x2fa1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA1F8_0x2fa1f8");
#endif

    switch (ctx->pc) {
        case 0x2fa1f8u: goto label_2fa1f8;
        case 0x2fa1fcu: goto label_2fa1fc;
        case 0x2fa200u: goto label_2fa200;
        case 0x2fa204u: goto label_2fa204;
        case 0x2fa208u: goto label_2fa208;
        case 0x2fa20cu: goto label_2fa20c;
        case 0x2fa210u: goto label_2fa210;
        case 0x2fa214u: goto label_2fa214;
        case 0x2fa218u: goto label_2fa218;
        case 0x2fa21cu: goto label_2fa21c;
        case 0x2fa220u: goto label_2fa220;
        case 0x2fa224u: goto label_2fa224;
        case 0x2fa228u: goto label_2fa228;
        case 0x2fa22cu: goto label_2fa22c;
        case 0x2fa230u: goto label_2fa230;
        case 0x2fa234u: goto label_2fa234;
        case 0x2fa238u: goto label_2fa238;
        case 0x2fa23cu: goto label_2fa23c;
        case 0x2fa240u: goto label_2fa240;
        case 0x2fa244u: goto label_2fa244;
        case 0x2fa248u: goto label_2fa248;
        case 0x2fa24cu: goto label_2fa24c;
        case 0x2fa250u: goto label_2fa250;
        case 0x2fa254u: goto label_2fa254;
        case 0x2fa258u: goto label_2fa258;
        case 0x2fa25cu: goto label_2fa25c;
        case 0x2fa260u: goto label_2fa260;
        case 0x2fa264u: goto label_2fa264;
        case 0x2fa268u: goto label_2fa268;
        case 0x2fa26cu: goto label_2fa26c;
        case 0x2fa270u: goto label_2fa270;
        case 0x2fa274u: goto label_2fa274;
        case 0x2fa278u: goto label_2fa278;
        case 0x2fa27cu: goto label_2fa27c;
        case 0x2fa280u: goto label_2fa280;
        case 0x2fa284u: goto label_2fa284;
        case 0x2fa288u: goto label_2fa288;
        case 0x2fa28cu: goto label_2fa28c;
        case 0x2fa290u: goto label_2fa290;
        case 0x2fa294u: goto label_2fa294;
        case 0x2fa298u: goto label_2fa298;
        case 0x2fa29cu: goto label_2fa29c;
        case 0x2fa2a0u: goto label_2fa2a0;
        case 0x2fa2a4u: goto label_2fa2a4;
        case 0x2fa2a8u: goto label_2fa2a8;
        case 0x2fa2acu: goto label_2fa2ac;
        case 0x2fa2b0u: goto label_2fa2b0;
        case 0x2fa2b4u: goto label_2fa2b4;
        case 0x2fa2b8u: goto label_2fa2b8;
        case 0x2fa2bcu: goto label_2fa2bc;
        case 0x2fa2c0u: goto label_2fa2c0;
        case 0x2fa2c4u: goto label_2fa2c4;
        case 0x2fa2c8u: goto label_2fa2c8;
        case 0x2fa2ccu: goto label_2fa2cc;
        case 0x2fa2d0u: goto label_2fa2d0;
        case 0x2fa2d4u: goto label_2fa2d4;
        case 0x2fa2d8u: goto label_2fa2d8;
        case 0x2fa2dcu: goto label_2fa2dc;
        case 0x2fa2e0u: goto label_2fa2e0;
        case 0x2fa2e4u: goto label_2fa2e4;
        case 0x2fa2e8u: goto label_2fa2e8;
        case 0x2fa2ecu: goto label_2fa2ec;
        case 0x2fa2f0u: goto label_2fa2f0;
        case 0x2fa2f4u: goto label_2fa2f4;
        case 0x2fa2f8u: goto label_2fa2f8;
        case 0x2fa2fcu: goto label_2fa2fc;
        case 0x2fa300u: goto label_2fa300;
        case 0x2fa304u: goto label_2fa304;
        case 0x2fa308u: goto label_2fa308;
        case 0x2fa30cu: goto label_2fa30c;
        case 0x2fa310u: goto label_2fa310;
        case 0x2fa314u: goto label_2fa314;
        case 0x2fa318u: goto label_2fa318;
        case 0x2fa31cu: goto label_2fa31c;
        case 0x2fa320u: goto label_2fa320;
        case 0x2fa324u: goto label_2fa324;
        case 0x2fa328u: goto label_2fa328;
        case 0x2fa32cu: goto label_2fa32c;
        case 0x2fa330u: goto label_2fa330;
        case 0x2fa334u: goto label_2fa334;
        case 0x2fa338u: goto label_2fa338;
        case 0x2fa33cu: goto label_2fa33c;
        case 0x2fa340u: goto label_2fa340;
        case 0x2fa344u: goto label_2fa344;
        case 0x2fa348u: goto label_2fa348;
        case 0x2fa34cu: goto label_2fa34c;
        case 0x2fa350u: goto label_2fa350;
        case 0x2fa354u: goto label_2fa354;
        case 0x2fa358u: goto label_2fa358;
        case 0x2fa35cu: goto label_2fa35c;
        default: break;
    }

    ctx->pc = 0x2fa1f8u;

label_2fa1f8:
    // 0x2fa1f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fa1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fa1fc:
    // 0x2fa1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fa1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2fa200:
    // 0x2fa200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fa200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fa204:
    // 0x2fa204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fa204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2fa208:
    // 0x2fa208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fa20c:
    // 0x2fa20c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fa20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2fa210:
    // 0x2fa210: 0xc0bb8b0  jal         func_2EE2C0
label_2fa214:
    if (ctx->pc == 0x2FA214u) {
        ctx->pc = 0x2FA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA210u;
        // 0x2fa214: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA218u;
        goto label_2fa218;
    }
    ctx->pc = 0x2FA210u;
    SET_GPR_U32(ctx, 31, 0x2FA218u);
    ctx->pc = 0x2FA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA210u;
    // 0x2fa214: 0x26240110  addiu       $a0, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2FA210u, 0x2FA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA218u;
label_2fa218:
    // 0x2fa218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fa218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa21c:
    // 0x2fa21c: 0x10000026  b           . + 4 + (0x26 << 2)
label_2fa220:
    if (ctx->pc == 0x2FA220u) {
        ctx->pc = 0x2FA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA21Cu;
        // 0x2fa220: 0x26250158  addiu       $a1, $s1, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA224u;
        goto label_2fa224;
    }
    ctx->pc = 0x2FA21Cu;
    {
        const bool branch_taken_0x2fa21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA21Cu;
        // 0x2fa220: 0x26250158  addiu       $a1, $s1, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa21c) {
            ctx->pc = 0x2FA2B8u;
            goto label_2fa2b8;
        }
    }
    ctx->pc = 0x2FA224u;
label_2fa224:
    // 0x2fa224: 0x0  nop
    ctx->pc = 0x2fa224u;
    // NOP
label_2fa228:
    // 0x2fa228: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fa228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fa22c:
    // 0x2fa22c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa230:
    if (ctx->pc == 0x2FA230u) {
        ctx->pc = 0x2FA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA22Cu;
        // 0x2fa230: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA234u;
        goto label_2fa234;
    }
    ctx->pc = 0x2FA22Cu;
    {
        const bool branch_taken_0x2fa22c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa22c) {
            ctx->pc = 0x2FA230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA22Cu;
            // 0x2fa230: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA248u;
            goto label_2fa248;
        }
    }
    ctx->pc = 0x2FA234u;
label_2fa234:
    // 0x2fa234: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa238:
    // 0x2fa238: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fa23c:
    // 0x2fa23c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa240:
    if (ctx->pc == 0x2FA240u) {
        ctx->pc = 0x2FA244u;
        goto label_2fa244;
    }
    ctx->pc = 0x2FA23Cu;
    {
        const bool branch_taken_0x2fa23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa23c) {
            ctx->pc = 0x2FA250u;
            goto label_2fa250;
        }
    }
    ctx->pc = 0x2FA244u;
label_2fa244:
    // 0x2fa244: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fa244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2fa248:
    // 0x2fa248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa24c:
    // 0x2fa24c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fa24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fa250:
    // 0x2fa250: 0xc0bda5e  jal         func_2F6978
label_2fa254:
    if (ctx->pc == 0x2FA254u) {
        ctx->pc = 0x2FA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA250u;
        // 0x2fa254: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA258u;
        goto label_2fa258;
    }
    ctx->pc = 0x2FA250u;
    SET_GPR_U32(ctx, 31, 0x2FA258u);
    ctx->pc = 0x2FA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA250u;
    // 0x2fa254: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6978u, 0x2FA250u, 0x2FA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA258u;
label_2fa258:
    // 0x2fa258: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_2fa25c:
    if (ctx->pc == 0x2FA25Cu) {
        ctx->pc = 0x2FA260u;
        goto label_2fa260;
    }
    ctx->pc = 0x2FA258u;
    {
        const bool branch_taken_0x2fa258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa258) {
            ctx->pc = 0x2FA33Cu;
            goto label_2fa33c;
        }
    }
    ctx->pc = 0x2FA260u;
label_2fa260:
    // 0x2fa260: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fa260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fa264:
    // 0x2fa264: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa268:
    if (ctx->pc == 0x2FA268u) {
        ctx->pc = 0x2FA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA264u;
        // 0x2fa268: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA26Cu;
        goto label_2fa26c;
    }
    ctx->pc = 0x2FA264u;
    {
        const bool branch_taken_0x2fa264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa264) {
            ctx->pc = 0x2FA268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA264u;
            // 0x2fa268: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA280u;
            goto label_2fa280;
        }
    }
    ctx->pc = 0x2FA26Cu;
label_2fa26c:
    // 0x2fa26c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa270:
    // 0x2fa270: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fa274:
    // 0x2fa274: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa278:
    if (ctx->pc == 0x2FA278u) {
        ctx->pc = 0x2FA27Cu;
        goto label_2fa27c;
    }
    ctx->pc = 0x2FA274u;
    {
        const bool branch_taken_0x2fa274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa274) {
            ctx->pc = 0x2FA288u;
            goto label_2fa288;
        }
    }
    ctx->pc = 0x2FA27Cu;
label_2fa27c:
    // 0x2fa27c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fa27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fa280:
    // 0x2fa280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa284:
    // 0x2fa284: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fa284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2fa288:
    // 0x2fa288: 0xc0bda8c  jal         func_2F6A30
label_2fa28c:
    if (ctx->pc == 0x2FA28Cu) {
        ctx->pc = 0x2FA28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA288u;
        // 0x2fa28c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA290u;
        goto label_2fa290;
    }
    ctx->pc = 0x2FA288u;
    SET_GPR_U32(ctx, 31, 0x2FA290u);
    ctx->pc = 0x2FA28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA288u;
    // 0x2fa28c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6A30u, 0x2FA288u, 0x2FA290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA290u;
label_2fa290:
    // 0x2fa290: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2fa294:
    if (ctx->pc == 0x2FA294u) {
        ctx->pc = 0x2FA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA290u;
        // 0x2fa294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA298u;
        goto label_2fa298;
    }
    ctx->pc = 0x2FA290u;
    {
        const bool branch_taken_0x2fa290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA290u;
        // 0x2fa294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa290) {
            ctx->pc = 0x2FA344u;
            goto label_2fa344;
        }
    }
    ctx->pc = 0x2FA298u;
label_2fa298:
    // 0x2fa298: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2fa298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2fa29c:
    // 0x2fa29c: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2fa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2fa2a0:
    // 0x2fa2a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fa2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa2a4:
    // 0x2fa2a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fa2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fa2a8:
    // 0x2fa2a8: 0x60f809  jalr        $v1
label_2fa2ac:
    if (ctx->pc == 0x2FA2ACu) {
        ctx->pc = 0x2FA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2A8u;
        // 0x2fa2ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2B0u;
        goto label_2fa2b0;
    }
    ctx->pc = 0x2FA2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FA2B0u);
        ctx->pc = 0x2FA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2A8u;
        // 0x2fa2ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA2A8u, 0x2FA2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA2B0u;
label_2fa2b0:
    // 0x2fa2b0: 0x10000022  b           . + 4 + (0x22 << 2)
label_2fa2b4:
    if (ctx->pc == 0x2FA2B4u) {
        ctx->pc = 0x2FA2B8u;
        goto label_2fa2b8;
    }
    ctx->pc = 0x2FA2B0u;
    {
        const bool branch_taken_0x2fa2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2b0) {
            ctx->pc = 0x2FA33Cu;
            goto label_2fa33c;
        }
    }
    ctx->pc = 0x2FA2B8u;
label_2fa2b8:
    // 0x2fa2b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fa2bc:
    // 0x2fa2bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa2c0:
    if (ctx->pc == 0x2FA2C0u) {
        ctx->pc = 0x2FA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2BCu;
        // 0x2fa2c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2C4u;
        goto label_2fa2c4;
    }
    ctx->pc = 0x2FA2BCu;
    {
        const bool branch_taken_0x2fa2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2bc) {
            ctx->pc = 0x2FA2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA2BCu;
            // 0x2fa2c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA2D8u;
            goto label_2fa2d8;
        }
    }
    ctx->pc = 0x2FA2C4u;
label_2fa2c4:
    // 0x2fa2c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa2c8:
    // 0x2fa2c8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2fa2cc:
    // 0x2fa2cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa2d0:
    if (ctx->pc == 0x2FA2D0u) {
        ctx->pc = 0x2FA2D4u;
        goto label_2fa2d4;
    }
    ctx->pc = 0x2FA2CCu;
    {
        const bool branch_taken_0x2fa2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa2cc) {
            ctx->pc = 0x2FA2E0u;
            goto label_2fa2e0;
        }
    }
    ctx->pc = 0x2FA2D4u;
label_2fa2d4:
    // 0x2fa2d4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa2d8:
    // 0x2fa2d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2dc:
    // 0x2fa2dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa2e0:
    // 0x2fa2e0: 0xc0be066  jal         func_2F8198
label_2fa2e4:
    if (ctx->pc == 0x2FA2E4u) {
        ctx->pc = 0x2FA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2E0u;
        // 0x2fa2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2E8u;
        goto label_2fa2e8;
    }
    ctx->pc = 0x2FA2E0u;
    SET_GPR_U32(ctx, 31, 0x2FA2E8u);
    ctx->pc = 0x2FA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2E0u;
    // 0x2fa2e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8198u, 0x2FA2E0u, 0x2FA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2E8u;
label_2fa2e8:
    // 0x2fa2e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2fa2ec:
    if (ctx->pc == 0x2FA2ECu) {
        ctx->pc = 0x2FA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2E8u;
        // 0x2fa2ec: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2F0u;
        goto label_2fa2f0;
    }
    ctx->pc = 0x2FA2E8u;
    {
        const bool branch_taken_0x2fa2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa2e8) {
            ctx->pc = 0x2FA2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA2E8u;
            // 0x2fa2ec: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA304u;
            goto label_2fa304;
        }
    }
    ctx->pc = 0x2FA2F0u;
label_2fa2f0:
    // 0x2fa2f0: 0xc0be8d8  jal         func_2FA360
label_2fa2f4:
    if (ctx->pc == 0x2FA2F4u) {
        ctx->pc = 0x2FA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2F0u;
        // 0x2fa2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2F8u;
        goto label_2fa2f8;
    }
    ctx->pc = 0x2FA2F0u;
    SET_GPR_U32(ctx, 31, 0x2FA2F8u);
    ctx->pc = 0x2FA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2F0u;
    // 0x2fa2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA360u, 0x2FA2F0u, 0x2FA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2F8u;
label_2fa2f8:
    // 0x2fa2f8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2fa2fc:
    if (ctx->pc == 0x2FA2FCu) {
        ctx->pc = 0x2FA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2F8u;
        // 0x2fa2fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA300u;
        goto label_2fa300;
    }
    ctx->pc = 0x2FA2F8u;
    {
        const bool branch_taken_0x2fa2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2F8u;
        // 0x2fa2fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2f8) {
            ctx->pc = 0x2FA348u;
            goto label_2fa348;
        }
    }
    ctx->pc = 0x2FA300u;
label_2fa300:
    // 0x2fa300: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x2fa300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_2fa304:
    // 0x2fa304: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fa308:
    // 0x2fa308: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2fa30c:
    if (ctx->pc == 0x2FA30Cu) {
        ctx->pc = 0x2FA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA308u;
        // 0x2fa30c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA310u;
        goto label_2fa310;
    }
    ctx->pc = 0x2FA308u;
    {
        const bool branch_taken_0x2fa308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa308) {
            ctx->pc = 0x2FA30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA308u;
            // 0x2fa30c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA324u;
            goto label_2fa324;
        }
    }
    ctx->pc = 0x2FA310u;
label_2fa310:
    // 0x2fa310: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2fa314:
    // 0x2fa314: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2fa318:
    // 0x2fa318: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2fa31c:
    if (ctx->pc == 0x2FA31Cu) {
        ctx->pc = 0x2FA320u;
        goto label_2fa320;
    }
    ctx->pc = 0x2FA318u;
    {
        const bool branch_taken_0x2fa318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa318) {
            ctx->pc = 0x2FA32Cu;
            goto label_2fa32c;
        }
    }
    ctx->pc = 0x2FA320u;
label_2fa320:
    // 0x2fa320: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa324:
    // 0x2fa324: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa328:
    // 0x2fa328: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa32c:
    // 0x2fa32c: 0xc0bde22  jal         func_2F7888
label_2fa330:
    if (ctx->pc == 0x2FA330u) {
        ctx->pc = 0x2FA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA32Cu;
        // 0x2fa330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA334u;
        goto label_2fa334;
    }
    ctx->pc = 0x2FA32Cu;
    SET_GPR_U32(ctx, 31, 0x2FA334u);
    ctx->pc = 0x2FA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA32Cu;
    // 0x2fa330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7888u, 0x2FA32Cu, 0x2FA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA334u;
label_2fa334:
    // 0x2fa334: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
label_2fa338:
    if (ctx->pc == 0x2FA338u) {
        ctx->pc = 0x2FA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA334u;
        // 0x2fa338: 0x26300148  addiu       $s0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA33Cu;
        goto label_2fa33c;
    }
    ctx->pc = 0x2FA334u;
    {
        const bool branch_taken_0x2fa334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA334u;
        // 0x2fa338: 0x26300148  addiu       $s0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa334) {
            ctx->pc = 0x2FA228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa228;
        }
    }
    ctx->pc = 0x2FA33Cu;
label_2fa33c:
    // 0x2fa33c: 0xc092940  jal         func_24A500
label_2fa340:
    if (ctx->pc == 0x2FA340u) {
        ctx->pc = 0x2FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA33Cu;
        // 0x2fa340: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA344u;
        goto label_2fa344;
    }
    ctx->pc = 0x2FA33Cu;
    SET_GPR_U32(ctx, 31, 0x2FA344u);
    ctx->pc = 0x2FA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA33Cu;
    // 0x2fa340: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2FA33Cu, 0x2FA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA344u;
label_2fa344:
    // 0x2fa344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa348:
    // 0x2fa348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fa348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2fa34c:
    // 0x2fa34c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fa34cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa350:
    // 0x2fa350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fa350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2fa354:
    // 0x2fa354: 0x3e00008  jr          $ra
label_2fa358:
    if (ctx->pc == 0x2FA358u) {
        ctx->pc = 0x2FA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA354u;
        // 0x2fa358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA35Cu;
        goto label_2fa35c;
    }
    ctx->pc = 0x2FA354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA354u;
        // 0x2fa358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA35Cu;
label_2fa35c:
    // 0x2fa35c: 0x0  nop
    ctx->pc = 0x2fa35cu;
    // NOP
    ctx->pc = 0x2fa360u;
}
