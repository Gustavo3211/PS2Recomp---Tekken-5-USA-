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

// Function: sub_002D10D8
// Address: 0x2d10d8 - 0x2d12c0
void sub_002D10D8_0x2d10d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D10D8_0x2d10d8");
#endif

    switch (ctx->pc) {
        case 0x2d10f0u: goto label_2d10f0;
        case 0x2d1100u: goto label_2d1100;
        case 0x2d1114u: goto label_2d1114;
        case 0x2d1148u: goto label_2d1148;
        case 0x2d1198u: goto label_2d1198;
        case 0x2d1208u: goto label_2d1208;
        case 0x2d1230u: goto label_2d1230;
        case 0x2d1278u: goto label_2d1278;
        default: break;
    }

    ctx->pc = 0x2d10d8u;

    // 0x2d10d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d10d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d10dc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2d10dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2d10e0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2d10e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2d10e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d10e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d10e8: 0xc0a793e  jal         func_29E4F8
    ctx->pc = 0x2D10E8u;
    SET_GPR_U32(ctx, 31, 0x2D10F0u);
    ctx->pc = 0x2D10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D10E8u;
    // 0x2d10ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E4F8u, 0x2D10E8u, 0x2D10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D10F0u;
label_2d10f0:
    // 0x2d10f0: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2D10F0u;
    {
        const bool branch_taken_0x2d10f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d10f0) {
            ctx->pc = 0x2D10F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D10F0u;
            // 0x2d10f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D127Cu;
            goto label_2d127c;
        }
    }
    ctx->pc = 0x2D10F8u;
    // 0x2d10f8: 0xc0a796a  jal         func_29E5A8
    ctx->pc = 0x2D10F8u;
    SET_GPR_U32(ctx, 31, 0x2D1100u);
    ctx->pc = 0x29E5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E5A8u, 0x2D10F8u, 0x2D1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1100u;
label_2d1100:
    // 0x2d1100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1104: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1108: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x2d1108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2d110c: 0xc04a151  jal         func_128544
    ctx->pc = 0x2D110Cu;
    SET_GPR_U32(ctx, 31, 0x2D1114u);
    ctx->pc = 0x2D1110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D110Cu;
    // 0x2d1110: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2D110Cu, 0x2D1114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1114u;
label_2d1114:
    // 0x2d1114: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2d1114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2d1118: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2d1118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2d111c: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x2d111cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d1120: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d1120u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1124: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d1124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d1128: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x2d1128u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d112c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1130: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d1130u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1134: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d1134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d1138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d1138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d113c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d113cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d1140: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2d1140u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d1144: 0x6812  mflo        $t5
    ctx->pc = 0x2d1144u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_2d1148:
    // 0x2d1148: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2d1148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2d114c: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2d114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2d1150: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d1150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d1154: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2d1154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2d1158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d1158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d115c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d115cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d1160: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d1164: 0x3a35021  addu        $t2, $sp, $v1
    ctx->pc = 0x2d1164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d1168: 0x244800e0  addiu       $t0, $v0, 0xE0
    ctx->pc = 0x2d1168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2d116c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d116cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1170: 0x95020010  lhu         $v0, 0x10($t0)
    ctx->pc = 0x2d1170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2d1174: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d1174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d1178: 0x91030013  lbu         $v1, 0x13($t0)
    ctx->pc = 0x2d1178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 19)));
    // 0x2d117c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2d117cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2d1180: 0x91020012  lbu         $v0, 0x12($t0)
    ctx->pc = 0x2d1180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18)));
    // 0x2d1184: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d1184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d1188: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1188u;
    {
        const bool branch_taken_0x2d1188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1188u;
        // 0x2d118c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1188) {
            ctx->pc = 0x2D11DCu;
            goto label_2d11dc;
        }
    }
    ctx->pc = 0x2D1190u;
    // 0x2d1190: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x2d1190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2d1194: 0x0  nop
    ctx->pc = 0x2d1194u;
    // NOP
label_2d1198:
    // 0x2d1198: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2d1198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d119c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d119cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d11a0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2d11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2d11a4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2d11a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2d11a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d11ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d11acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d11b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d11b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d11b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d11bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d11c0: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2d11c0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d11c4: 0x1012  mflo        $v0
    ctx->pc = 0x2d11c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d11c8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d11c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d11cc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2d11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d11d0: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2d11d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d11d4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D11D4u;
    {
        const bool branch_taken_0x2d11d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11D4u;
        // 0x2d11d8: 0x1826021  addu        $t4, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11d4) {
            ctx->pc = 0x2D1198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1198;
        }
    }
    ctx->pc = 0x2D11DCu;
label_2d11dc:
    // 0x2d11dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d11dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d11e0: 0x29620009  slti        $v0, $t3, 0x9
    ctx->pc = 0x2d11e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d11e4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2D11E4u;
    {
        const bool branch_taken_0x2d11e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D11E4u;
        // 0x2d11e8: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d11e4) {
            ctx->pc = 0x2D1148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1148;
        }
    }
    ctx->pc = 0x2D11ECu;
    // 0x2d11ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2d11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d11f0: 0x1ac1823  subu        $v1, $t5, $t4
    ctx->pc = 0x2d11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x2d11f4: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x2d11f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d11f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d11fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d1200: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2d1200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x2d1204: 0x0  nop
    ctx->pc = 0x2d1204u;
    // NOP
label_2d1208:
    // 0x2d1208: 0xb1040  sll         $v0, $t3, 1
    ctx->pc = 0x2d1208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2d120c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2d120cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d1210: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d1210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d1214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d1214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d1218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d121c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d121cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1220: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D1220u;
    {
        const bool branch_taken_0x2d1220 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1220u;
        // 0x2d1224: 0x3a25021  addu        $t2, $sp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1220) {
            ctx->pc = 0x2D125Cu;
            goto label_2d125c;
        }
    }
    ctx->pc = 0x2D1228u;
    // 0x2d1228: 0x24c90008  addiu       $t1, $a2, 0x8
    ctx->pc = 0x2d1228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2d122c: 0x0  nop
    ctx->pc = 0x2d122cu;
    // NOP
label_2d1230:
    // 0x2d1230: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2d1230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d1234: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d1234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d1238: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x2d1238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2d123c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2d123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2d1240: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1244: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d1244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d1248: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2d1248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d124c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1250: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x2d1250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d1254: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D1254u;
    {
        const bool branch_taken_0x2d1254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1254u;
        // 0x2d1258: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1254) {
            ctx->pc = 0x2D1230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1230;
        }
    }
    ctx->pc = 0x2D125Cu;
label_2d125c:
    // 0x2d125c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d125cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d1260: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x2d1260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x2d1264: 0x29620009  slti        $v0, $t3, 0x9
    ctx->pc = 0x2d1264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2d1268: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D1268u;
    {
        const bool branch_taken_0x2d1268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1268u;
        // 0x2d126c: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1268) {
            ctx->pc = 0x2D1208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1208;
        }
    }
    ctx->pc = 0x2D1270u;
    // 0x2d1270: 0xc0a7956  jal         func_29E558
    ctx->pc = 0x2D1270u;
    SET_GPR_U32(ctx, 31, 0x2D1278u);
    ctx->pc = 0x2D1274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1270u;
    // 0x2d1274: 0xae2d0000  sw          $t5, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E558u, 0x2D1270u, 0x2D1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1278u;
label_2d1278:
    // 0x2d1278: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2d1278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2d127c:
    // 0x2d127c: 0x904483ed  lbu         $a0, -0x7C13($v0)
    ctx->pc = 0x2d127cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294935533)));
    // 0x2d1280: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1280u;
    {
        const bool branch_taken_0x2d1280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1280u;
        // 0x2d1284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1280) {
            ctx->pc = 0x2D1290u;
            goto label_2d1290;
        }
    }
    ctx->pc = 0x2D1288u;
    // 0x2d1288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1288u;
    {
        const bool branch_taken_0x2d1288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1288u;
        // 0x2d128c: 0x8f85a850  lw          $a1, -0x57B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1288) {
            ctx->pc = 0x2D12A0u;
            goto label_2d12a0;
        }
    }
    ctx->pc = 0x2D1290u;
label_2d1290:
    // 0x2d1290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1294: 0x8f83a854  lw          $v1, -0x57AC($gp)
    ctx->pc = 0x2d1294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x2d1298: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2d1298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2d129c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2d129cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2d12a0:
    // 0x2d12a0: 0x512c3  sra         $v0, $a1, 11
    ctx->pc = 0x2d12a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 11));
    // 0x2d12a4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2d12a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d12a8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2d12a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d12ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d12acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d12b0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d12b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d12b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D12B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D12B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12B4u;
        // 0x2d12b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D12B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D12BCu;
    // 0x2d12bc: 0x0  nop
    ctx->pc = 0x2d12bcu;
    // NOP
    ctx->pc = 0x2d12c0u;
}
