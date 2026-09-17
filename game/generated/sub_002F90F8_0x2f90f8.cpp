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

// Function: sub_002F90F8
// Address: 0x2f90f8 - 0x2f92e8
void sub_002F90F8_0x2f90f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F90F8_0x2f90f8");
#endif

    switch (ctx->pc) {
        case 0x2f91ccu: goto label_2f91cc;
        case 0x2f924cu: goto label_2f924c;
        case 0x2f92ccu: goto label_2f92cc;
        default: break;
    }

    ctx->pc = 0x2f90f8u;

    // 0x2f90f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f90f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f90fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f90fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9104: 0x24e600b8  addiu       $a2, $a3, 0xB8
    ctx->pc = 0x2f9104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x2f9108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f9108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f910c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f9110: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f9110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f9114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f9114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f9118: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2f9118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f911c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F911Cu;
    {
        const bool branch_taken_0x2f911c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f911c) {
            ctx->pc = 0x2F9120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F911Cu;
            // 0x2f9120: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9138u;
            goto label_2f9138;
        }
    }
    ctx->pc = 0x2F9124u;
    // 0x2f9124: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2f9124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2f9128: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f912c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F912Cu;
    {
        const bool branch_taken_0x2f912c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F912Cu;
        // 0x2f9130: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f912c) {
            ctx->pc = 0x2F9140u;
            goto label_2f9140;
        }
    }
    ctx->pc = 0x2F9134u;
    // 0x2f9134: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f9134u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2f9138:
    // 0x2f9138: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f9138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f913c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f913cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2f9140:
    // 0x2f9140: 0x24f20148  addiu       $s2, $a3, 0x148
    ctx->pc = 0x2f9140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 328));
    // 0x2f9144: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f9144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f9148: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9148u;
    {
        const bool branch_taken_0x2f9148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9148) {
            ctx->pc = 0x2F914Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9148u;
            // 0x2f914c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9164u;
            goto label_2f9164;
        }
    }
    ctx->pc = 0x2F9150u;
    // 0x2f9150: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9154: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f9158: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9158u;
    {
        const bool branch_taken_0x2f9158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9158u;
        // 0x2f915c: 0x24f10150  addiu       $s1, $a3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9158) {
            ctx->pc = 0x2F9170u;
            goto label_2f9170;
        }
    }
    ctx->pc = 0x2F9160u;
    // 0x2f9160: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f9160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f9164:
    // 0x2f9164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9168: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f9168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f916c: 0x24f10150  addiu       $s1, $a3, 0x150
    ctx->pc = 0x2f916cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_2f9170:
    // 0x2f9170: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2f9170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9174: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9174u;
    {
        const bool branch_taken_0x2f9174 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9174) {
            ctx->pc = 0x2F9178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9174u;
            // 0x2f9178: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9190u;
            goto label_2f9190;
        }
    }
    ctx->pc = 0x2F917Cu;
    // 0x2f917c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2f917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9180: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f9184: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9184u;
    {
        const bool branch_taken_0x2f9184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9184u;
        // 0x2f9188: 0x24f00158  addiu       $s0, $a3, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9184) {
            ctx->pc = 0x2F919Cu;
            goto label_2f919c;
        }
    }
    ctx->pc = 0x2F918Cu;
    // 0x2f918c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f918cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f9190:
    // 0x2f9190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9194: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f9194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2f9198: 0x24f00158  addiu       $s0, $a3, 0x158
    ctx->pc = 0x2f9198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 344));
label_2f919c:
    // 0x2f919c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2f919cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f91a0: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F91A0u;
    {
        const bool branch_taken_0x2f91a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f91a0) {
            ctx->pc = 0x2F91A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91A0u;
            // 0x2f91a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F91BCu;
            goto label_2f91bc;
        }
    }
    ctx->pc = 0x2F91A8u;
    // 0x2f91a8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2f91a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f91ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f91acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f91b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F91B0u;
    {
        const bool branch_taken_0x2f91b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f91b0) {
            ctx->pc = 0x2F91C4u;
            goto label_2f91c4;
        }
    }
    ctx->pc = 0x2F91B8u;
    // 0x2f91b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f91bc:
    // 0x2f91bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f91bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f91c4:
    // 0x2f91c4: 0xc0bd9ea  jal         func_2F67A8
    ctx->pc = 0x2F91C4u;
    SET_GPR_U32(ctx, 31, 0x2F91CCu);
    ctx->pc = 0x2F91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F91C4u;
    // 0x2f91c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F67A8u, 0x2F91C4u, 0x2F91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91CCu;
label_2f91cc:
    // 0x2f91cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f91d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F91D0u;
    {
        const bool branch_taken_0x2f91d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f91d0) {
            ctx->pc = 0x2F91D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91D0u;
            // 0x2f91d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F91ECu;
            goto label_2f91ec;
        }
    }
    ctx->pc = 0x2F91D8u;
    // 0x2f91d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f91dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f91e0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F91E0u;
    {
        const bool branch_taken_0x2f91e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f91e0) {
            ctx->pc = 0x2F91E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91E0u;
            // 0x2f91e4: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F91F8u;
            goto label_2f91f8;
        }
    }
    ctx->pc = 0x2F91E8u;
    // 0x2f91e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f91ec:
    // 0x2f91ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f91f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2f91f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2f91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f91f8:
    // 0x2f91f8: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F91F8u;
    {
        const bool branch_taken_0x2f91f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f91f8) {
            ctx->pc = 0x2F91FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F91F8u;
            // 0x2f91fc: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9214u;
            goto label_2f9214;
        }
    }
    ctx->pc = 0x2F9200u;
    // 0x2f9200: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9204: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f9208: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9208u;
    {
        const bool branch_taken_0x2f9208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9208) {
            ctx->pc = 0x2F920Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9208u;
            // 0x2f920c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9220u;
            goto label_2f9220;
        }
    }
    ctx->pc = 0x2F9210u;
    // 0x2f9210: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f9210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f9214:
    // 0x2f9214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9218: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f9218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2f921c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2f921cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9220:
    // 0x2f9220: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9220u;
    {
        const bool branch_taken_0x2f9220 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9220) {
            ctx->pc = 0x2F9224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9220u;
            // 0x2f9224: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F923Cu;
            goto label_2f923c;
        }
    }
    ctx->pc = 0x2F9228u;
    // 0x2f9228: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f922c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f9230: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9230u;
    {
        const bool branch_taken_0x2f9230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9230) {
            ctx->pc = 0x2F9244u;
            goto label_2f9244;
        }
    }
    ctx->pc = 0x2F9238u;
    // 0x2f9238: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f9238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f923c:
    // 0x2f923c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f923cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9240: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f9240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f9244:
    // 0x2f9244: 0xc0bdb56  jal         func_2F6D58
    ctx->pc = 0x2F9244u;
    SET_GPR_U32(ctx, 31, 0x2F924Cu);
    ctx->pc = 0x2F9248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9244u;
    // 0x2f9248: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6D58u, 0x2F9244u, 0x2F924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F924Cu;
label_2f924c:
    // 0x2f924c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9250: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9250u;
    {
        const bool branch_taken_0x2f9250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9250) {
            ctx->pc = 0x2F9254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9250u;
            // 0x2f9254: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F926Cu;
            goto label_2f926c;
        }
    }
    ctx->pc = 0x2F9258u;
    // 0x2f9258: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f925c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f9260: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9260u;
    {
        const bool branch_taken_0x2f9260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9260) {
            ctx->pc = 0x2F9264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9260u;
            // 0x2f9264: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9278u;
            goto label_2f9278;
        }
    }
    ctx->pc = 0x2F9268u;
    // 0x2f9268: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f9268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f926c:
    // 0x2f926c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9270: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f9270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f9274: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2f9274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9278:
    // 0x2f9278: 0x50c00006  beql        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9278u;
    {
        const bool branch_taken_0x2f9278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9278) {
            ctx->pc = 0x2F927Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9278u;
            // 0x2f927c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9294u;
            goto label_2f9294;
        }
    }
    ctx->pc = 0x2F9280u;
    // 0x2f9280: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2f9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f9284: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f9288: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9288u;
    {
        const bool branch_taken_0x2f9288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9288) {
            ctx->pc = 0x2F928Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9288u;
            // 0x2f928c: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92A0u;
            goto label_2f92a0;
        }
    }
    ctx->pc = 0x2F9290u;
    // 0x2f9290: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f9290u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f9294:
    // 0x2f9294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9298: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f9298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f929c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2f929cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f92a0:
    // 0x2f92a0: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F92A0u;
    {
        const bool branch_taken_0x2f92a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f92a0) {
            ctx->pc = 0x2F92A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F92A0u;
            // 0x2f92a4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F92BCu;
            goto label_2f92bc;
        }
    }
    ctx->pc = 0x2F92A8u;
    // 0x2f92a8: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2f92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2f92ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f92acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f92b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F92B0u;
    {
        const bool branch_taken_0x2f92b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f92b0) {
            ctx->pc = 0x2F92C4u;
            goto label_2f92c4;
        }
    }
    ctx->pc = 0x2F92B8u;
    // 0x2f92b8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f92bc:
    // 0x2f92bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f92bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f92c4:
    // 0x2f92c4: 0xc0bdf26  jal         func_2F7C98
    ctx->pc = 0x2F92C4u;
    SET_GPR_U32(ctx, 31, 0x2F92CCu);
    ctx->pc = 0x2F92C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92C4u;
    // 0x2f92c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C98u, 0x2F92C4u, 0x2F92CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92CCu;
label_2f92cc:
    // 0x2f92cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f92ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f92d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f92d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f92d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f92d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f92d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f92d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f92dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f92dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f92e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F92E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F92E0u;
        // 0x2f92e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F92E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F92E8u;
}
