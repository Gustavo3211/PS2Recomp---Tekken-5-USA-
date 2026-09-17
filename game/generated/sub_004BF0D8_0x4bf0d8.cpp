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

// Function: sub_004BF0D8
// Address: 0x4bf0d8 - 0x4bf1a0
void sub_004BF0D8_0x4bf0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF0D8_0x4bf0d8");
#endif

    switch (ctx->pc) {
        case 0x4bf0d8u: goto label_4bf0d8;
        case 0x4bf0dcu: goto label_4bf0dc;
        case 0x4bf0e0u: goto label_4bf0e0;
        case 0x4bf0e4u: goto label_4bf0e4;
        case 0x4bf0e8u: goto label_4bf0e8;
        case 0x4bf0ecu: goto label_4bf0ec;
        case 0x4bf0f0u: goto label_4bf0f0;
        case 0x4bf0f4u: goto label_4bf0f4;
        case 0x4bf0f8u: goto label_4bf0f8;
        case 0x4bf0fcu: goto label_4bf0fc;
        case 0x4bf100u: goto label_4bf100;
        case 0x4bf104u: goto label_4bf104;
        case 0x4bf108u: goto label_4bf108;
        case 0x4bf10cu: goto label_4bf10c;
        case 0x4bf110u: goto label_4bf110;
        case 0x4bf114u: goto label_4bf114;
        case 0x4bf118u: goto label_4bf118;
        case 0x4bf11cu: goto label_4bf11c;
        case 0x4bf120u: goto label_4bf120;
        case 0x4bf124u: goto label_4bf124;
        case 0x4bf128u: goto label_4bf128;
        case 0x4bf12cu: goto label_4bf12c;
        case 0x4bf130u: goto label_4bf130;
        case 0x4bf134u: goto label_4bf134;
        case 0x4bf138u: goto label_4bf138;
        case 0x4bf13cu: goto label_4bf13c;
        case 0x4bf140u: goto label_4bf140;
        case 0x4bf144u: goto label_4bf144;
        case 0x4bf148u: goto label_4bf148;
        case 0x4bf14cu: goto label_4bf14c;
        case 0x4bf150u: goto label_4bf150;
        case 0x4bf154u: goto label_4bf154;
        case 0x4bf158u: goto label_4bf158;
        case 0x4bf15cu: goto label_4bf15c;
        case 0x4bf160u: goto label_4bf160;
        case 0x4bf164u: goto label_4bf164;
        case 0x4bf168u: goto label_4bf168;
        case 0x4bf16cu: goto label_4bf16c;
        case 0x4bf170u: goto label_4bf170;
        case 0x4bf174u: goto label_4bf174;
        case 0x4bf178u: goto label_4bf178;
        case 0x4bf17cu: goto label_4bf17c;
        case 0x4bf180u: goto label_4bf180;
        case 0x4bf184u: goto label_4bf184;
        case 0x4bf188u: goto label_4bf188;
        case 0x4bf18cu: goto label_4bf18c;
        case 0x4bf190u: goto label_4bf190;
        case 0x4bf194u: goto label_4bf194;
        case 0x4bf198u: goto label_4bf198;
        case 0x4bf19cu: goto label_4bf19c;
        default: break;
    }

    ctx->pc = 0x4bf0d8u;

label_4bf0d8:
    // 0x4bf0d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bf0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4bf0dc:
    // 0x4bf0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bf0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4bf0e0:
    // 0x4bf0e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf0e4:
    // 0x4bf0e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4bf0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4bf0e8:
    // 0x4bf0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bf0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4bf0ec:
    // 0x4bf0ec: 0xc1232f2  jal         func_48CBC8
label_4bf0f0:
    if (ctx->pc == 0x4BF0F0u) {
        ctx->pc = 0x4BF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF0ECu;
        // 0x4bf0f0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF0F4u;
        goto label_4bf0f4;
    }
    ctx->pc = 0x4BF0ECu;
    SET_GPR_U32(ctx, 31, 0x4BF0F4u);
    ctx->pc = 0x4BF0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF0ECu;
    // 0x4bf0f0: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4BF0ECu, 0x4BF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF0F4u;
label_4bf0f4:
    // 0x4bf0f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4bf0f8:
    // 0x4bf0f8: 0xac620e70  sw          $v0, 0xE70($v1)
    ctx->pc = 0x4bf0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3696), GPR_U32(ctx, 2));
label_4bf0fc:
    // 0x4bf0fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4bf0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bf100:
    // 0x4bf100: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
label_4bf104:
    if (ctx->pc == 0x4BF104u) {
        ctx->pc = 0x4BF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF100u;
        // 0x4bf104: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF108u;
        goto label_4bf108;
    }
    ctx->pc = 0x4BF100u;
    {
        const bool branch_taken_0x4bf100 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4bf100) {
            ctx->pc = 0x4BF104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF100u;
            // 0x4bf104: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF12Cu;
            goto label_4bf12c;
        }
    }
    ctx->pc = 0x4BF108u;
label_4bf108:
    // 0x4bf108: 0xc12b642  jal         func_4AD908
label_4bf10c:
    if (ctx->pc == 0x4BF10Cu) {
        ctx->pc = 0x4BF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF108u;
        // 0x4bf10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF110u;
        goto label_4bf110;
    }
    ctx->pc = 0x4BF108u;
    SET_GPR_U32(ctx, 31, 0x4BF110u);
    ctx->pc = 0x4BF10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BF108u;
    // 0x4bf10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BF108u, 0x4BF110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BF110u;
label_4bf110:
    // 0x4bf110: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4bf110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
label_4bf114:
    // 0x4bf114: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4bf114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4bf118:
    // 0x4bf118: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x4bf118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
label_4bf11c:
    // 0x4bf11c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4bf11cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4bf120:
    // 0x4bf120: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4bf120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4bf124:
    // 0x4bf124: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4bf124u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4bf128:
    // 0x4bf128: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4bf128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4bf12c:
    // 0x4bf12c: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4bf12cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4bf130:
    // 0x4bf130: 0x24840e58  addiu       $a0, $a0, 0xE58
    ctx->pc = 0x4bf130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3672));
label_4bf134:
    // 0x4bf134: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4bf134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4bf138:
    // 0x4bf138: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bf138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bf13c:
    // 0x4bf13c: 0x2442ffd5  addiu       $v0, $v0, -0x2B
    ctx->pc = 0x4bf13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967253));
label_4bf140:
    // 0x4bf140: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4bf140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4bf144:
    // 0x4bf144: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4bf144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4bf148:
    // 0x4bf148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4bf148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4bf14c:
    // 0x4bf14c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4bf14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4bf150:
    // 0x4bf150: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bf150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4bf154:
    // 0x4bf154: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4bf154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4bf158:
    // 0x4bf158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bf158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bf15c:
    // 0x4bf15c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4bf15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4bf160:
    // 0x4bf160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bf160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bf164:
    // 0x4bf164: 0x8c6370a0  lw          $v1, 0x70A0($v1)
    ctx->pc = 0x4bf164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28832)));
label_4bf168:
    // 0x4bf168: 0xacc30e6c  sw          $v1, 0xE6C($a2)
    ctx->pc = 0x4bf168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3692), GPR_U32(ctx, 3));
label_4bf16c:
    // 0x4bf16c: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4bf16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4bf170:
    // 0x4bf170: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4bf170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4bf174:
    // 0x4bf174: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4bf174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4bf178:
    // 0x4bf178: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4bf178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4bf17c:
    // 0x4bf17c: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
label_4bf180:
    if (ctx->pc == 0x4BF180u) {
        ctx->pc = 0x4BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF17Cu;
        // 0x4bf180: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF184u;
        goto label_4bf184;
    }
    ctx->pc = 0x4BF17Cu;
    {
        const bool branch_taken_0x4bf17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bf17c) {
            ctx->pc = 0x4BF180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF17Cu;
            // 0x4bf180: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF230u;
            return;
        }
    }
    ctx->pc = 0x4BF184u;
label_4bf184:
    // 0x4bf184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bf184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4bf188:
    // 0x4bf188: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4bf188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4bf18c:
    // 0x4bf18c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4bf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4bf190:
    // 0x4bf190: 0x8c63b3f0  lw          $v1, -0x4C10($v1)
    ctx->pc = 0x4bf190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947824)));
label_4bf194:
    // 0x4bf194: 0x600008  jr          $v1
label_4bf198:
    if (ctx->pc == 0x4BF198u) {
        ctx->pc = 0x4BF19Cu;
        goto label_4bf19c;
    }
    ctx->pc = 0x4BF194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF194u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4BF19Cu;
label_4bf19c:
    // 0x4bf19c: 0x0  nop
    ctx->pc = 0x4bf19cu;
    // NOP
    ctx->pc = 0x4bf1a0u;
}
