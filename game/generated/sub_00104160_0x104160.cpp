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

// Function: sub_00104160
// Address: 0x104160 - 0x104328
void sub_00104160_0x104160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104160_0x104160");
#endif

    switch (ctx->pc) {
        case 0x104160u: goto label_104160;
        case 0x104164u: goto label_104164;
        case 0x104168u: goto label_104168;
        case 0x10416cu: goto label_10416c;
        case 0x104170u: goto label_104170;
        case 0x104174u: goto label_104174;
        case 0x104178u: goto label_104178;
        case 0x10417cu: goto label_10417c;
        case 0x104180u: goto label_104180;
        case 0x104184u: goto label_104184;
        case 0x104188u: goto label_104188;
        case 0x10418cu: goto label_10418c;
        case 0x104190u: goto label_104190;
        case 0x104194u: goto label_104194;
        case 0x104198u: goto label_104198;
        case 0x10419cu: goto label_10419c;
        case 0x1041a0u: goto label_1041a0;
        case 0x1041a4u: goto label_1041a4;
        case 0x1041a8u: goto label_1041a8;
        case 0x1041acu: goto label_1041ac;
        case 0x1041b0u: goto label_1041b0;
        case 0x1041b4u: goto label_1041b4;
        case 0x1041b8u: goto label_1041b8;
        case 0x1041bcu: goto label_1041bc;
        case 0x1041c0u: goto label_1041c0;
        case 0x1041c4u: goto label_1041c4;
        case 0x1041c8u: goto label_1041c8;
        case 0x1041ccu: goto label_1041cc;
        case 0x1041d0u: goto label_1041d0;
        case 0x1041d4u: goto label_1041d4;
        case 0x1041d8u: goto label_1041d8;
        case 0x1041dcu: goto label_1041dc;
        case 0x1041e0u: goto label_1041e0;
        case 0x1041e4u: goto label_1041e4;
        case 0x1041e8u: goto label_1041e8;
        case 0x1041ecu: goto label_1041ec;
        case 0x1041f0u: goto label_1041f0;
        case 0x1041f4u: goto label_1041f4;
        case 0x1041f8u: goto label_1041f8;
        case 0x1041fcu: goto label_1041fc;
        case 0x104200u: goto label_104200;
        case 0x104204u: goto label_104204;
        case 0x104208u: goto label_104208;
        case 0x10420cu: goto label_10420c;
        case 0x104210u: goto label_104210;
        case 0x104214u: goto label_104214;
        case 0x104218u: goto label_104218;
        case 0x10421cu: goto label_10421c;
        case 0x104220u: goto label_104220;
        case 0x104224u: goto label_104224;
        case 0x104228u: goto label_104228;
        case 0x10422cu: goto label_10422c;
        case 0x104230u: goto label_104230;
        case 0x104234u: goto label_104234;
        case 0x104238u: goto label_104238;
        case 0x10423cu: goto label_10423c;
        case 0x104240u: goto label_104240;
        case 0x104244u: goto label_104244;
        case 0x104248u: goto label_104248;
        case 0x10424cu: goto label_10424c;
        case 0x104250u: goto label_104250;
        case 0x104254u: goto label_104254;
        case 0x104258u: goto label_104258;
        case 0x10425cu: goto label_10425c;
        case 0x104260u: goto label_104260;
        case 0x104264u: goto label_104264;
        case 0x104268u: goto label_104268;
        case 0x10426cu: goto label_10426c;
        case 0x104270u: goto label_104270;
        case 0x104274u: goto label_104274;
        case 0x104278u: goto label_104278;
        case 0x10427cu: goto label_10427c;
        case 0x104280u: goto label_104280;
        case 0x104284u: goto label_104284;
        case 0x104288u: goto label_104288;
        case 0x10428cu: goto label_10428c;
        case 0x104290u: goto label_104290;
        case 0x104294u: goto label_104294;
        case 0x104298u: goto label_104298;
        case 0x10429cu: goto label_10429c;
        case 0x1042a0u: goto label_1042a0;
        case 0x1042a4u: goto label_1042a4;
        case 0x1042a8u: goto label_1042a8;
        case 0x1042acu: goto label_1042ac;
        case 0x1042b0u: goto label_1042b0;
        case 0x1042b4u: goto label_1042b4;
        case 0x1042b8u: goto label_1042b8;
        case 0x1042bcu: goto label_1042bc;
        case 0x1042c0u: goto label_1042c0;
        case 0x1042c4u: goto label_1042c4;
        case 0x1042c8u: goto label_1042c8;
        case 0x1042ccu: goto label_1042cc;
        case 0x1042d0u: goto label_1042d0;
        case 0x1042d4u: goto label_1042d4;
        case 0x1042d8u: goto label_1042d8;
        case 0x1042dcu: goto label_1042dc;
        case 0x1042e0u: goto label_1042e0;
        case 0x1042e4u: goto label_1042e4;
        case 0x1042e8u: goto label_1042e8;
        case 0x1042ecu: goto label_1042ec;
        case 0x1042f0u: goto label_1042f0;
        case 0x1042f4u: goto label_1042f4;
        case 0x1042f8u: goto label_1042f8;
        case 0x1042fcu: goto label_1042fc;
        case 0x104300u: goto label_104300;
        case 0x104304u: goto label_104304;
        case 0x104308u: goto label_104308;
        case 0x10430cu: goto label_10430c;
        case 0x104310u: goto label_104310;
        case 0x104314u: goto label_104314;
        case 0x104318u: goto label_104318;
        case 0x10431cu: goto label_10431c;
        case 0x104320u: goto label_104320;
        case 0x104324u: goto label_104324;
        default: break;
    }

    ctx->pc = 0x104160u;

label_104160:
    // 0x104160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_104164:
    // 0x104164: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_104168:
    // 0x104168: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x104168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_10416c:
    // 0x10416c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10416cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_104170:
    // 0x104170: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104174:
    // 0x104174: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x104174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_104178:
    // 0x104178: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10417c:
    // 0x10417c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_104180:
    // 0x104180: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x104180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_104184:
    // 0x104184: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x104184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_104188:
    // 0x104188: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10418c:
    // 0x10418c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_104190:
    if (ctx->pc == 0x104190u) {
        ctx->pc = 0x104190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10418Cu;
        // 0x104190: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104194u;
        goto label_104194;
    }
    ctx->pc = 0x10418Cu;
    {
        const bool branch_taken_0x10418c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x104190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10418Cu;
        // 0x104190: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10418c) {
            ctx->pc = 0x1041A0u;
            goto label_1041a0;
        }
    }
    ctx->pc = 0x104194u;
label_104194:
    // 0x104194: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x104194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_104198:
    // 0x104198: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_10419c:
    if (ctx->pc == 0x10419Cu) {
        ctx->pc = 0x10419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104198u;
        // 0x10419c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041A0u;
        goto label_1041a0;
    }
    ctx->pc = 0x104198u;
    {
        const bool branch_taken_0x104198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104198) {
            ctx->pc = 0x10419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104198u;
            // 0x10419c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1041A8u;
            goto label_1041a8;
        }
    }
    ctx->pc = 0x1041A0u;
label_1041a0:
    // 0x1041a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1041a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1041a4:
    // 0x1041a4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1041a8:
    // 0x1041a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1041ac:
    if (ctx->pc == 0x1041ACu) {
        ctx->pc = 0x1041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A8u;
        // 0x1041ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041B0u;
        goto label_1041b0;
    }
    ctx->pc = 0x1041A8u;
    {
        const bool branch_taken_0x1041a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1041ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A8u;
        // 0x1041ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041a8) {
            ctx->pc = 0x1041BCu;
            goto label_1041bc;
        }
    }
    ctx->pc = 0x1041B0u;
label_1041b0:
    // 0x1041b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1041b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1041b4:
    // 0x1041b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1041b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1041b8:
    // 0x1041b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1041b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1041bc:
    // 0x1041bc: 0xc040f4e  jal         func_103D38
label_1041c0:
    if (ctx->pc == 0x1041C0u) {
        ctx->pc = 0x1041C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041BCu;
        // 0x1041c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041C4u;
        goto label_1041c4;
    }
    ctx->pc = 0x1041BCu;
    SET_GPR_U32(ctx, 31, 0x1041C4u);
    ctx->pc = 0x1041C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041BCu;
    // 0x1041c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D38u, 0x1041BCu, 0x1041C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041C4u;
label_1041c4:
    // 0x1041c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1041c8:
    if (ctx->pc == 0x1041C8u) {
        ctx->pc = 0x1041C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041C4u;
        // 0x1041c8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041CCu;
        goto label_1041cc;
    }
    ctx->pc = 0x1041C4u;
    {
        const bool branch_taken_0x1041c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1041c4) {
            ctx->pc = 0x1041C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1041C4u;
            // 0x1041c8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1041E0u;
            goto label_1041e0;
        }
    }
    ctx->pc = 0x1041CCu;
label_1041cc:
    // 0x1041cc: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_1041d0:
    if (ctx->pc == 0x1041D0u) {
        ctx->pc = 0x1041D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041CCu;
        // 0x1041d0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041D4u;
        goto label_1041d4;
    }
    ctx->pc = 0x1041CCu;
    {
        const bool branch_taken_0x1041cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1041cc) {
            ctx->pc = 0x1041D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1041CCu;
            // 0x1041d0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1041E0u;
            goto label_1041e0;
        }
    }
    ctx->pc = 0x1041D4u;
label_1041d4:
    // 0x1041d4: 0xc041228  jal         func_1048A0
label_1041d8:
    if (ctx->pc == 0x1041D8u) {
        ctx->pc = 0x1041D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041D4u;
        // 0x1041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041DCu;
        goto label_1041dc;
    }
    ctx->pc = 0x1041D4u;
    SET_GPR_U32(ctx, 31, 0x1041DCu);
    ctx->pc = 0x1041D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041D4u;
    // 0x1041d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1041D4u, 0x1041DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041DCu;
label_1041dc:
    // 0x1041dc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x1041dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_1041e0:
    // 0x1041e0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_1041e4:
    if (ctx->pc == 0x1041E4u) {
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041E8u;
        goto label_1041e8;
    }
    ctx->pc = 0x1041E0u;
    {
        const bool branch_taken_0x1041e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041e0) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x1041E8u;
label_1041e8:
    // 0x1041e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1041ec:
    // 0x1041ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1041f0:
    // 0x1041f0: 0xc042a82  jal         func_10AA08
label_1041f4:
    if (ctx->pc == 0x1041F4u) {
        ctx->pc = 0x1041F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041F0u;
        // 0x1041f4: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1041F8u;
        goto label_1041f8;
    }
    ctx->pc = 0x1041F0u;
    SET_GPR_U32(ctx, 31, 0x1041F8u);
    ctx->pc = 0x1041F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F0u;
    // 0x1041f4: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA08u, 0x1041F0u, 0x1041F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1041fc:
    if (ctx->pc == 0x1041FCu) {
        ctx->pc = 0x1041FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041F8u;
        // 0x1041fc: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104200u;
        goto label_104200;
    }
    ctx->pc = 0x1041F8u;
    {
        const bool branch_taken_0x1041f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1041f8) {
            ctx->pc = 0x1041FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1041F8u;
            // 0x1041fc: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104214u;
            goto label_104214;
        }
    }
    ctx->pc = 0x104200u;
label_104200:
    // 0x104200: 0xc0414fc  jal         func_1053F0
label_104204:
    if (ctx->pc == 0x104204u) {
        ctx->pc = 0x104204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104200u;
        // 0x104204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104208u;
        goto label_104208;
    }
    ctx->pc = 0x104200u;
    SET_GPR_U32(ctx, 31, 0x104208u);
    ctx->pc = 0x104204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104200u;
    // 0x104204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053F0u, 0x104200u, 0x104208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104208u;
label_104208:
    // 0x104208: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x104208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_10420c:
    // 0x10420c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_104210:
    if (ctx->pc == 0x104210u) {
        ctx->pc = 0x104210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10420Cu;
        // 0x104210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104214u;
        goto label_104214;
    }
    ctx->pc = 0x10420Cu;
    {
        const bool branch_taken_0x10420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10420Cu;
        // 0x104210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10420c) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x104214u;
label_104214:
    // 0x104214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x104214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_104218:
    // 0x104218: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_10421c:
    // 0x10421c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_104220:
    // 0x104220: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x104220u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_104224:
    // 0x104224: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_104228:
    if (ctx->pc == 0x104228u) {
        ctx->pc = 0x104228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104224u;
        // 0x104228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10422Cu;
        goto label_10422c;
    }
    ctx->pc = 0x104224u;
    {
        const bool branch_taken_0x104224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x104228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104224u;
        // 0x104228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104224) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x10422Cu;
label_10422c:
    // 0x10422c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104230:
    // 0x104230: 0xc040f4e  jal         func_103D38
label_104234:
    if (ctx->pc == 0x104234u) {
        ctx->pc = 0x104234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104230u;
        // 0x104234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104238u;
        goto label_104238;
    }
    ctx->pc = 0x104230u;
    SET_GPR_U32(ctx, 31, 0x104238u);
    ctx->pc = 0x104234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104230u;
    // 0x104234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D38u, 0x104230u, 0x104238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104238u;
label_104238:
    // 0x104238: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x104238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10423c:
    // 0x10423c: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x10423cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_104240:
    // 0x104240: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_104244:
    if (ctx->pc == 0x104244u) {
        ctx->pc = 0x104244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104240u;
        // 0x104244: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104248u;
        goto label_104248;
    }
    ctx->pc = 0x104240u;
    {
        const bool branch_taken_0x104240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104240u;
        // 0x104244: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104240) {
            ctx->pc = 0x10425Cu;
            goto label_10425c;
        }
    }
    ctx->pc = 0x104248u;
label_104248:
    // 0x104248: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_10424c:
    if (ctx->pc == 0x10424Cu) {
        ctx->pc = 0x10424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104248u;
        // 0x10424c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104250u;
        goto label_104250;
    }
    ctx->pc = 0x104248u;
    {
        const bool branch_taken_0x104248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x104248) {
            ctx->pc = 0x10424Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104248u;
            // 0x10424c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104260u;
            goto label_104260;
        }
    }
    ctx->pc = 0x104250u;
label_104250:
    // 0x104250: 0xc041228  jal         func_1048A0
label_104254:
    if (ctx->pc == 0x104254u) {
        ctx->pc = 0x104254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104250u;
        // 0x104254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104258u;
        goto label_104258;
    }
    ctx->pc = 0x104250u;
    SET_GPR_U32(ctx, 31, 0x104258u);
    ctx->pc = 0x104254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104250u;
    // 0x104254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x104250u, 0x104258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104258u;
label_104258:
    // 0x104258: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x104258u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_10425c:
    // 0x10425c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_104260:
    // 0x104260: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_104264:
    if (ctx->pc == 0x104264u) {
        ctx->pc = 0x104264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104260u;
        // 0x104264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104268u;
        goto label_104268;
    }
    ctx->pc = 0x104260u;
    {
        const bool branch_taken_0x104260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104260u;
        // 0x104264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104260) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x104268u;
label_104268:
    // 0x104268: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10426c:
    // 0x10426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104270:
    // 0x104270: 0xc04152c  jal         func_1054B0
label_104274:
    if (ctx->pc == 0x104274u) {
        ctx->pc = 0x104274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104270u;
        // 0x104274: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104278u;
        goto label_104278;
    }
    ctx->pc = 0x104270u;
    SET_GPR_U32(ctx, 31, 0x104278u);
    ctx->pc = 0x104274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104270u;
    // 0x104274: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054B0u, 0x104270u, 0x104278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104278u;
label_104278:
    // 0x104278: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10427c:
    // 0x10427c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_104280:
    // 0x104280: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x104280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_104284:
    // 0x104284: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_104288:
    // 0x104288: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x104288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10428c:
    // 0x10428c: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x10428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_104290:
    // 0x104290: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x104290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_104294:
    // 0x104294: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_104298:
    // 0x104298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x104298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10429c:
    // 0x10429c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x10429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_1042a0:
    // 0x1042a0: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_1042a4:
    if (ctx->pc == 0x1042A4u) {
        ctx->pc = 0x1042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042A0u;
        // 0x1042a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042A8u;
        goto label_1042a8;
    }
    ctx->pc = 0x1042A0u;
    {
        const bool branch_taken_0x1042a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042A0u;
        // 0x1042a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042a0) {
            ctx->pc = 0x104300u;
            goto label_104300;
        }
    }
    ctx->pc = 0x1042A8u;
label_1042a8:
    // 0x1042a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1042a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1042ac:
    // 0x1042ac: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1042b0:
    if (ctx->pc == 0x1042B0u) {
        ctx->pc = 0x1042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042ACu;
        // 0x1042b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042B4u;
        goto label_1042b4;
    }
    ctx->pc = 0x1042ACu;
    {
        const bool branch_taken_0x1042ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042ACu;
        // 0x1042b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042ac) {
            ctx->pc = 0x104300u;
            goto label_104300;
        }
    }
    ctx->pc = 0x1042B4u;
label_1042b4:
    // 0x1042b4: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1042b8:
    // 0x1042b8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_1042bc:
    if (ctx->pc == 0x1042BCu) {
        ctx->pc = 0x1042BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042B8u;
        // 0x1042bc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042C0u;
        goto label_1042c0;
    }
    ctx->pc = 0x1042B8u;
    {
        const bool branch_taken_0x1042b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042B8u;
        // 0x1042bc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042b8) {
            ctx->pc = 0x104304u;
            goto label_104304;
        }
    }
    ctx->pc = 0x1042C0u;
label_1042c0:
    // 0x1042c0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1042c4:
    // 0x1042c4: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_1042c8:
    if (ctx->pc == 0x1042C8u) {
        ctx->pc = 0x1042C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042C4u;
        // 0x1042c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042CCu;
        goto label_1042cc;
    }
    ctx->pc = 0x1042C4u;
    {
        const bool branch_taken_0x1042c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042C4u;
        // 0x1042c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042c4) {
            ctx->pc = 0x104308u;
            goto label_104308;
        }
    }
    ctx->pc = 0x1042CCu;
label_1042cc:
    // 0x1042cc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1042ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_1042d0:
    // 0x1042d0: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x1042d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1042d4:
    // 0x1042d4: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x1042d4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1042d8:
    // 0x1042d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1042dc:
    // 0x1042dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1042e0:
    // 0x1042e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1042e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1042e4:
    // 0x1042e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1042e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1042e8:
    // 0x1042e8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x1042e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1042ec:
    // 0x1042ec: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x1042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1042f0:
    // 0x1042f0: 0xe0f809  jalr        $a3
label_1042f4:
    if (ctx->pc == 0x1042F4u) {
        ctx->pc = 0x1042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042F0u;
        // 0x1042f4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1042F8u;
        goto label_1042f8;
    }
    ctx->pc = 0x1042F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1042F8u);
        ctx->pc = 0x1042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042F0u;
        // 0x1042f4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042F0u, 0x1042F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1042F8u;
label_1042f8:
    // 0x1042f8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1042f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1042fc:
    // 0x1042fc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1042fcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_104300:
    // 0x104300: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104304:
    // 0x104304: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x104304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_104308:
    // 0x104308: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x104308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10430c:
    // 0x10430c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10430cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_104310:
    // 0x104310: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x104310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_104314:
    // 0x104314: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x104314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_104318:
    // 0x104318: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x104318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10431c:
    // 0x10431c: 0x3e00008  jr          $ra
label_104320:
    if (ctx->pc == 0x104320u) {
        ctx->pc = 0x104320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10431Cu;
        // 0x104320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104324u;
        goto label_104324;
    }
    ctx->pc = 0x10431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10431Cu;
        // 0x104320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104324u;
label_104324:
    // 0x104324: 0x0  nop
    ctx->pc = 0x104324u;
    // NOP
    ctx->pc = 0x104328u;
}
