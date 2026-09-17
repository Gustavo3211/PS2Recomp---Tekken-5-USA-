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

// Function: sub_00241210
// Address: 0x241210 - 0x241378
void sub_00241210_0x241210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241210_0x241210");
#endif

    switch (ctx->pc) {
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        case 0x2412e8u: goto label_2412e8;
        case 0x2412ecu: goto label_2412ec;
        case 0x2412f0u: goto label_2412f0;
        case 0x2412f4u: goto label_2412f4;
        case 0x2412f8u: goto label_2412f8;
        case 0x2412fcu: goto label_2412fc;
        case 0x241300u: goto label_241300;
        case 0x241304u: goto label_241304;
        case 0x241308u: goto label_241308;
        case 0x24130cu: goto label_24130c;
        case 0x241310u: goto label_241310;
        case 0x241314u: goto label_241314;
        case 0x241318u: goto label_241318;
        case 0x24131cu: goto label_24131c;
        case 0x241320u: goto label_241320;
        case 0x241324u: goto label_241324;
        case 0x241328u: goto label_241328;
        case 0x24132cu: goto label_24132c;
        case 0x241330u: goto label_241330;
        case 0x241334u: goto label_241334;
        case 0x241338u: goto label_241338;
        case 0x24133cu: goto label_24133c;
        case 0x241340u: goto label_241340;
        case 0x241344u: goto label_241344;
        case 0x241348u: goto label_241348;
        case 0x24134cu: goto label_24134c;
        case 0x241350u: goto label_241350;
        case 0x241354u: goto label_241354;
        case 0x241358u: goto label_241358;
        case 0x24135cu: goto label_24135c;
        case 0x241360u: goto label_241360;
        case 0x241364u: goto label_241364;
        case 0x241368u: goto label_241368;
        case 0x24136cu: goto label_24136c;
        case 0x241370u: goto label_241370;
        case 0x241374u: goto label_241374;
        default: break;
    }

    ctx->pc = 0x241210u;

label_241210:
    // 0x241210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_241214:
    // 0x241214: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_241218:
    // 0x241218: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936668)));
label_24121c:
    // 0x24121c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x24121cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241220:
    // 0x241220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_241224:
    // 0x241224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x241224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_241228:
    // 0x241228: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x241228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24122c:
    // 0x24122c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_241230:
    // 0x241230: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x241230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_241234:
    // 0x241234: 0x14640048  bne         $v1, $a0, . + 4 + (0x48 << 2)
label_241238:
    if (ctx->pc == 0x241238u) {
        ctx->pc = 0x241238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241234u;
        // 0x241238: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24123Cu;
        goto label_24123c;
    }
    ctx->pc = 0x241234u;
    {
        const bool branch_taken_0x241234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x241238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241234u;
        // 0x241238: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241234) {
            ctx->pc = 0x241358u;
            goto label_241358;
        }
    }
    ctx->pc = 0x24123Cu;
label_24123c:
    // 0x24123c: 0xc089622  jal         func_225888
label_241240:
    if (ctx->pc == 0x241240u) {
        ctx->pc = 0x241240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24123Cu;
        // 0x241240: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241244u;
        goto label_241244;
    }
    ctx->pc = 0x24123Cu;
    SET_GPR_U32(ctx, 31, 0x241244u);
    ctx->pc = 0x241240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24123Cu;
    // 0x241240: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x24123Cu, 0x241244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241244u;
label_241244:
    // 0x241244: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_241248:
    if (ctx->pc == 0x241248u) {
        ctx->pc = 0x241248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241244u;
        // 0x241248: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24124Cu;
        goto label_24124c;
    }
    ctx->pc = 0x241244u;
    {
        const bool branch_taken_0x241244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241244u;
        // 0x241248: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241244) {
            ctx->pc = 0x241358u;
            goto label_241358;
        }
    }
    ctx->pc = 0x24124Cu;
label_24124c:
    // 0x24124c: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
label_241250:
    // 0x241250: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_241254:
    // 0x241254: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_241258:
    // 0x241258: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_24125c:
    if (ctx->pc == 0x24125Cu) {
        ctx->pc = 0x24125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241258u;
        // 0x24125c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241260u;
        goto label_241260;
    }
    ctx->pc = 0x241258u;
    {
        const bool branch_taken_0x241258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241258u;
        // 0x24125c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241258) {
            ctx->pc = 0x24126Cu;
            goto label_24126c;
        }
    }
    ctx->pc = 0x241260u;
label_241260:
    // 0x241260: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
label_241264:
    // 0x241264: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_241268:
    if (ctx->pc == 0x241268u) {
        ctx->pc = 0x24126Cu;
        goto label_24126c;
    }
    ctx->pc = 0x241264u;
    {
        const bool branch_taken_0x241264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x241264) {
            ctx->pc = 0x241270u;
            goto label_241270;
        }
    }
    ctx->pc = 0x24126Cu;
label_24126c:
    // 0x24126c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241270:
    // 0x241270: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
label_241274:
    if (ctx->pc == 0x241274u) {
        ctx->pc = 0x241274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241270u;
        // 0x241274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241278u;
        goto label_241278;
    }
    ctx->pc = 0x241270u;
    {
        const bool branch_taken_0x241270 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x241274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241270u;
        // 0x241274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241270) {
            ctx->pc = 0x24135Cu;
            goto label_24135c;
        }
    }
    ctx->pc = 0x241278u;
label_241278:
    // 0x241278: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x241278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_24127c:
    // 0x24127c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_241280:
    // 0x241280: 0x245437a0  addiu       $s4, $v0, 0x37A0
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
label_241284:
    // 0x241284: 0x24738858  addiu       $s3, $v1, -0x77A8
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
label_241288:
    // 0x241288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x241288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24128c:
    // 0x24128c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x24128cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_241290:
    // 0x241290: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_241294:
    // 0x241294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x241294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_241298:
    // 0x241298: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x241298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24129c:
    // 0x24129c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2412a0:
    // 0x2412a0: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_2412a4:
    if (ctx->pc == 0x2412A4u) {
        ctx->pc = 0x2412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A0u;
        // 0x2412a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412A8u;
        goto label_2412a8;
    }
    ctx->pc = 0x2412A0u;
    {
        const bool branch_taken_0x2412a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412A0u;
        // 0x2412a4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412a0) {
            ctx->pc = 0x24134Cu;
            goto label_24134c;
        }
    }
    ctx->pc = 0x2412A8u;
label_2412a8:
    // 0x2412a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2412ac:
    // 0x2412ac: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2412b0:
    if (ctx->pc == 0x2412B0u) {
        ctx->pc = 0x2412B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412ACu;
        // 0x2412b0: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412B4u;
        goto label_2412b4;
    }
    ctx->pc = 0x2412ACu;
    {
        const bool branch_taken_0x2412ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412ACu;
        // 0x2412b0: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412ac) {
            ctx->pc = 0x241350u;
            goto label_241350;
        }
    }
    ctx->pc = 0x2412B4u;
label_2412b4:
    // 0x2412b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2412b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2412b8:
    // 0x2412b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2412b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2412bc:
    // 0x2412bc: 0x1c400023  bgtz        $v0, . + 4 + (0x23 << 2)
label_2412c0:
    if (ctx->pc == 0x2412C0u) {
        ctx->pc = 0x2412C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412BCu;
        // 0x2412c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412C4u;
        goto label_2412c4;
    }
    ctx->pc = 0x2412BCu;
    {
        const bool branch_taken_0x2412bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2412C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412BCu;
        // 0x2412c0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412bc) {
            ctx->pc = 0x24134Cu;
            goto label_24134c;
        }
    }
    ctx->pc = 0x2412C4u;
label_2412c4:
    // 0x2412c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2412c8:
    // 0x2412c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2412cc:
    // 0x2412cc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2412ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2412d0:
    // 0x2412d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2412d4:
    // 0x2412d4: 0x60f809  jalr        $v1
label_2412d8:
    if (ctx->pc == 0x2412D8u) {
        ctx->pc = 0x2412D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D4u;
        // 0x2412d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412DCu;
        goto label_2412dc;
    }
    ctx->pc = 0x2412D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2412DCu);
        ctx->pc = 0x2412D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412D4u;
        // 0x2412d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412D4u, 0x2412DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2412DCu;
label_2412dc:
    // 0x2412dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2412dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2412e0:
    // 0x2412e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2412e4:
    // 0x2412e4: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_2412e8:
    if (ctx->pc == 0x2412E8u) {
        ctx->pc = 0x2412E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412E4u;
        // 0x2412e8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412ECu;
        goto label_2412ec;
    }
    ctx->pc = 0x2412E4u;
    {
        const bool branch_taken_0x2412e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2412E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412E4u;
        // 0x2412e8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412e4) {
            ctx->pc = 0x2412F4u;
            goto label_2412f4;
        }
    }
    ctx->pc = 0x2412ECu;
label_2412ec:
    // 0x2412ec: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_2412f0:
    if (ctx->pc == 0x2412F0u) {
        ctx->pc = 0x2412F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412ECu;
        // 0x2412f0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412F4u;
        goto label_2412f4;
    }
    ctx->pc = 0x2412ECu;
    {
        const bool branch_taken_0x2412ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2412F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412ECu;
        // 0x2412f0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412ec) {
            ctx->pc = 0x241348u;
            goto label_241348;
        }
    }
    ctx->pc = 0x2412F4u;
label_2412f4:
    // 0x2412f4: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x2412f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2412f8:
    // 0x2412f8: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_2412fc:
    if (ctx->pc == 0x2412FCu) {
        ctx->pc = 0x2412FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412F8u;
        // 0x2412fc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241300u;
        goto label_241300;
    }
    ctx->pc = 0x2412F8u;
    {
        const bool branch_taken_0x2412f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412f8) {
            ctx->pc = 0x2412FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2412F8u;
            // 0x2412fc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24133Cu;
            goto label_24133c;
        }
    }
    ctx->pc = 0x241300u;
label_241300:
    // 0x241300: 0xc04a1f0  jal         func_1287C0
label_241304:
    if (ctx->pc == 0x241304u) {
        ctx->pc = 0x241308u;
        goto label_241308;
    }
    ctx->pc = 0x241300u;
    SET_GPR_U32(ctx, 31, 0x241308u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x241300u, 0x241308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241308u;
label_241308:
    // 0x241308: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x241308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_24130c:
    // 0x24130c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_241310:
    // 0x241310: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x241310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_241314:
    // 0x241314: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x241314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_241318:
    // 0x241318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24131c:
    // 0x24131c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x24131cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_241320:
    // 0x241320: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x241320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_241324:
    // 0x241324: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x241324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_241328:
    // 0x241328: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
label_24132c:
    // 0x24132c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x24132cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_241330:
    // 0x241330: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x241330u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_241334:
    // 0x241334: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x241334u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_241338:
    // 0x241338: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24133c:
    // 0x24133c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_241340:
    // 0x241340: 0x10000002  b           . + 4 + (0x2 << 2)
label_241344:
    if (ctx->pc == 0x241344u) {
        ctx->pc = 0x241344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241340u;
        // 0x241344: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241348u;
        goto label_241348;
    }
    ctx->pc = 0x241340u;
    {
        const bool branch_taken_0x241340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241340u;
        // 0x241344: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241340) {
            ctx->pc = 0x24134Cu;
            goto label_24134c;
        }
    }
    ctx->pc = 0x241348u;
label_241348:
    // 0x241348: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x241348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_24134c:
    // 0x24134c: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x24134cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_241350:
    // 0x241350: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_241354:
    if (ctx->pc == 0x241354u) {
        ctx->pc = 0x241354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241350u;
        // 0x241354: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241358u;
        goto label_241358;
    }
    ctx->pc = 0x241350u;
    {
        const bool branch_taken_0x241350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241350u;
        // 0x241354: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241350) {
            ctx->pc = 0x241290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241290;
        }
    }
    ctx->pc = 0x241358u;
label_241358:
    // 0x241358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24135c:
    // 0x24135c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24135cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_241360:
    // 0x241360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x241360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_241364:
    // 0x241364: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x241364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_241368:
    // 0x241368: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x241368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24136c:
    // 0x24136c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24136cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_241370:
    // 0x241370: 0x3e00008  jr          $ra
label_241374:
    if (ctx->pc == 0x241374u) {
        ctx->pc = 0x241374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241370u;
        // 0x241374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x241378u;
        goto label_fallthrough_0x241370;
    }
    ctx->pc = 0x241370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241370u;
        // 0x241374: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x241370:
    ctx->pc = 0x241378u;
}
