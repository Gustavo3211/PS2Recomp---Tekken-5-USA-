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

// Function: sub_002B6088
// Address: 0x2b6088 - 0x2b61d8
void sub_002B6088_0x2b6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6088_0x2b6088");
#endif

    switch (ctx->pc) {
        case 0x2b6108u: goto label_2b6108;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b619cu: goto label_2b619c;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61b4u: goto label_2b61b4;
        default: break;
    }

    ctx->pc = 0x2b6088u;

    // 0x2b6088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b608c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b6090: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b6090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6094: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x2b6094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x2b6098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b609c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b60a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b60a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b60a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b60a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b60a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b60acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b60b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b60b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B60B4u;
    {
        const bool branch_taken_0x2b60b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60B4u;
        // 0x2b60b8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60b4) {
            ctx->pc = 0x2B60C8u;
            goto label_2b60c8;
        }
    }
    ctx->pc = 0x2B60BCu;
    // 0x2b60bc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b60c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B60C0u;
    {
        const bool branch_taken_0x2b60c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60C0u;
        // 0x2b60c4: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60c0) {
            ctx->pc = 0x2B60D4u;
            goto label_2b60d4;
        }
    }
    ctx->pc = 0x2B60C8u;
label_2b60c8:
    // 0x2b60c8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b60cc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2b60ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2b60d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b60d4:
    // 0x2b60d4: 0x32531000  andi        $s3, $s2, 0x1000
    ctx->pc = 0x2b60d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x2b60d8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B60D8u;
    {
        const bool branch_taken_0x2b60d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60D8u;
        // 0x2b60dc: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60d8) {
            ctx->pc = 0x2B6100u;
            goto label_2b6100;
        }
    }
    ctx->pc = 0x2B60E0u;
    // 0x2b60e0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b60e4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2b60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b60e8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b60e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b60ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b60f0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2b60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2b60f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B60F4u;
    {
        const bool branch_taken_0x2b60f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F4u;
        // 0x2b60f8: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60f4) {
            ctx->pc = 0x2B611Cu;
            goto label_2b611c;
        }
    }
    ctx->pc = 0x2B60FCu;
    // 0x2b60fc: 0x0  nop
    ctx->pc = 0x2b60fcu;
    // NOP
label_2b6100:
    // 0x2b6100: 0xc0ac02c  jal         func_2B00B0
    ctx->pc = 0x2B6100u;
    SET_GPR_U32(ctx, 31, 0x2B6108u);
    ctx->pc = 0x2B6104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6100u;
    // 0x2b6104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B00B0u, 0x2B6100u, 0x2B6108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6108u;
label_2b6108:
    // 0x2b6108: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b610c: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2b610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2b6110: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2b6110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2b6114: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b6114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b6118: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2b6118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_2b611c:
    // 0x2b611c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2b611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b6120: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x2b6120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x2b6124: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x2b6124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b6128: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x2b6128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2b612c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B612Cu;
    {
        const bool branch_taken_0x2b612c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B612Cu;
        // 0x2b6130: 0xae060074  sw          $a2, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b612c) {
            ctx->pc = 0x2B61A8u;
            goto label_2b61a8;
        }
    }
    ctx->pc = 0x2B6134u;
    // 0x2b6134: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x2b6134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b6138: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2b6138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2b613c: 0x2431024  and         $v0, $s2, $v1
    ctx->pc = 0x2b613cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2b6140: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6140u;
    {
        const bool branch_taken_0x2b6140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6140u;
        // 0x2b6144: 0x8e32006c  lw          $s2, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6140) {
            ctx->pc = 0x2B6180u;
            goto label_2b6180;
        }
    }
    ctx->pc = 0x2B6148u;
    // 0x2b6148: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x2b6148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x2b614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6150: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b6150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b6154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b6154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6158: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2b6158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2b615c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b615cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6160: 0xc0ab4e2  jal         func_2AD388
    ctx->pc = 0x2B6160u;
    SET_GPR_U32(ctx, 31, 0x2B6168u);
    ctx->pc = 0x2B6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6160u;
    // 0x2b6164: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD388u, 0x2B6160u, 0x2B6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6168u;
label_2b6168:
    // 0x2b6168: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6168u;
    {
        const bool branch_taken_0x2b6168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6168) {
            ctx->pc = 0x2B616Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6168u;
            // 0x2b616c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6194u;
            goto label_2b6194;
        }
    }
    ctx->pc = 0x2B6170u;
    // 0x2b6170: 0xc0ac628  jal         func_2B18A0
    ctx->pc = 0x2B6170u;
    SET_GPR_U32(ctx, 31, 0x2B6178u);
    ctx->pc = 0x2B6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6170u;
    // 0x2b6174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18A0u, 0x2B6170u, 0x2B6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6178u;
label_2b6178:
    // 0x2b6178: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6178u;
    {
        const bool branch_taken_0x2b6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6178u;
        // 0x2b617c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6178) {
            ctx->pc = 0x2B6194u;
            goto label_2b6194;
        }
    }
    ctx->pc = 0x2B6180u;
label_2b6180:
    // 0x2b6180: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x2b6184: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b6188: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2b6188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2b618c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2b618cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2b6190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6194:
    // 0x2b6194: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B6194u;
    SET_GPR_U32(ctx, 31, 0x2B619Cu);
    ctx->pc = 0x2B6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6194u;
    // 0x2b6198: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B6194u, 0x2B619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B619Cu;
label_2b619c:
    // 0x2b619c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61a0: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B61A0u;
    SET_GPR_U32(ctx, 31, 0x2B61A8u);
    ctx->pc = 0x2B61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61A0u;
    // 0x2b61a4: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B61A0u, 0x2B61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61A8u;
label_2b61a8:
    // 0x2b61a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b61a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61ac: 0xc0ad62a  jal         func_2B58A8
    ctx->pc = 0x2B61ACu;
    SET_GPR_U32(ctx, 31, 0x2B61B4u);
    ctx->pc = 0x2B61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61ACu;
    // 0x2b61b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B58A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B58A8u, 0x2B61ACu, 0x2B61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61B4u;
label_2b61b4:
    // 0x2b61b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b61b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b61b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b61b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b61bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b61bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b61c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b61c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b61c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b61c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b61c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b61cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61CCu;
        // 0x2b61d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B61D4u;
    // 0x2b61d4: 0x0  nop
    ctx->pc = 0x2b61d4u;
    // NOP
    ctx->pc = 0x2b61d8u;
}
