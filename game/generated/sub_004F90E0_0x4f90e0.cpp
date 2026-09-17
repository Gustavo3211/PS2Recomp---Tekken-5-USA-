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

// Function: sub_004F90E0
// Address: 0x4f90e0 - 0x4f9270
void sub_004F90E0_0x4f90e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F90E0_0x4f90e0");
#endif

    switch (ctx->pc) {
        case 0x4f9100u: goto label_4f9100;
        case 0x4f9150u: goto label_4f9150;
        case 0x4f9198u: goto label_4f9198;
        case 0x4f91e8u: goto label_4f91e8;
        case 0x4f9240u: goto label_4f9240;
        default: break;
    }

    ctx->pc = 0x4f90e0u;

    // 0x4f90e0: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f90e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f90e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f90e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f90e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f90e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f90ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f90f0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F90F0u;
    {
        const bool branch_taken_0x4f90f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F90F0u;
        // 0x4f90f4: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90f0) {
            ctx->pc = 0x4F9124u;
            goto label_4f9124;
        }
    }
    ctx->pc = 0x4F90F8u;
    // 0x4f90f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f90f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f90fc: 0x0  nop
    ctx->pc = 0x4f90fcu;
    // NOP
label_4f9100:
    // 0x4f9100: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4f9100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f9104: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x4f9104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4f9108: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4f9108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4f910c: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x4f910cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x4f9110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f9110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f9114: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9118: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f911c: 0x1486fff8  bne         $a0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F911Cu;
    {
        const bool branch_taken_0x4f911c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4F9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F911Cu;
        // 0x4f9120: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f911c) {
            ctx->pc = 0x4F9100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9100;
        }
    }
    ctx->pc = 0x4F9124u;
label_4f9124:
    // 0x4f9124: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9124u;
        // 0x4f9128: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F912Cu;
    // 0x4f912c: 0x0  nop
    ctx->pc = 0x4f912cu;
    // NOP
    // 0x4f9130: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f9130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f9134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f9134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9138: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f913c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F913Cu;
    {
        const bool branch_taken_0x4f913c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f913c) {
            ctx->pc = 0x4F916Cu;
            goto label_4f916c;
        }
    }
    ctx->pc = 0x4F9144u;
    // 0x4f9144: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x4f9144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x4f9148: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4f9148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f914c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f914cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4f9150:
    // 0x4f9150: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x4f9150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4f9154: 0x51fc0  sll         $v1, $a1, 31
    ctx->pc = 0x4f9154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
    // 0x4f9158: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4f9158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4f915c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9160: 0x0  nop
    ctx->pc = 0x4f9160u;
    // NOP
    // 0x4f9164: 0x1487fffa  bne         $a0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F9164u;
    {
        const bool branch_taken_0x4f9164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x4F9168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9164u;
        // 0x4f9168: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9164) {
            ctx->pc = 0x4F9150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9150;
        }
    }
    ctx->pc = 0x4F916Cu;
label_4f916c:
    // 0x4f916c: 0x3e00008  jr          $ra
    ctx->pc = 0x4F916Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F916Cu;
        // 0x4f9170: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F916Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9174u;
    // 0x4f9174: 0x0  nop
    ctx->pc = 0x4f9174u;
    // NOP
    // 0x4f9178: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x4f9178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f917c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4f917cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4f9180: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f9180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f9184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9188: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F9188u;
    {
        const bool branch_taken_0x4f9188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9188u;
        // 0x4f918c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9188) {
            ctx->pc = 0x4F91BCu;
            goto label_4f91bc;
        }
    }
    ctx->pc = 0x4F9190u;
    // 0x4f9190: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4f9190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9194: 0x0  nop
    ctx->pc = 0x4f9194u;
    // NOP
label_4f9198:
    // 0x4f9198: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4f9198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f919c: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x4f919cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4f91a0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4f91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4f91a4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x4f91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x4f91a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f91a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f91ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4f91acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4f91b0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4f91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4f91b4: 0x1486fff8  bne         $a0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4F91B4u;
    {
        const bool branch_taken_0x4f91b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4F91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F91B4u;
        // 0x4f91b8: 0x22e03  sra         $a1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f91b4) {
            ctx->pc = 0x4F9198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9198;
        }
    }
    ctx->pc = 0x4F91BCu;
label_4f91bc:
    // 0x4f91bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4F91BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F91BCu;
        // 0x4f91c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F91BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F91C4u;
    // 0x4f91c4: 0x0  nop
    ctx->pc = 0x4f91c4u;
    // NOP
    // 0x4f91c8: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x4f91c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f91cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f91ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f91d0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4f91d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f91d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f91d8: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F91D8u;
    {
        const bool branch_taken_0x4f91d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F91DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F91D8u;
        // 0x4f91dc: 0x52403  sra         $a0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f91d8) {
            ctx->pc = 0x4F9218u;
            goto label_4f9218;
        }
    }
    ctx->pc = 0x4F91E0u;
    // 0x4f91e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4f91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f91e4: 0x0  nop
    ctx->pc = 0x4f91e4u;
    // NOP
label_4f91e8:
    // 0x4f91e8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f91e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f91ec: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x4f91ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4f91f0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x4f91f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x4f91f4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4f91f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f91f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f91fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f91fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4f9200: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4f9200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x4f9204: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f9204u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f9208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f9208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f920c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4f920cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f9210: 0x14e5fff5  bne         $a3, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x4F9210u;
    {
        const bool branch_taken_0x4f9210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9210u;
        // 0x4f9214: 0x32403  sra         $a0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9210) {
            ctx->pc = 0x4F91E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f91e8;
        }
    }
    ctx->pc = 0x4F9218u;
label_4f9218:
    // 0x4f9218: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9218u;
        // 0x4f921c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9220u;
    // 0x4f9220: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x4f9220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x4f9224: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4f9224u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4f9228: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4f9228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f922c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f9230: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4F9230u;
    {
        const bool branch_taken_0x4f9230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9230u;
        // 0x4f9234: 0x52603  sra         $a0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9230) {
            ctx->pc = 0x4F9268u;
            goto label_4f9268;
        }
    }
    ctx->pc = 0x4F9238u;
    // 0x4f9238: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4f9238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f923c: 0x0  nop
    ctx->pc = 0x4f923cu;
    // NOP
label_4f9240:
    // 0x4f9240: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4f9240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f9244: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4f9244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4f9248: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4f9248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4f924c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x4f924cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x4f9250: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f9250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4f9254: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f9254u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f9258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f9258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f925c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x4f925cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x4f9260: 0x14e5fff7  bne         $a3, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4F9260u;
    {
        const bool branch_taken_0x4f9260 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9260u;
        // 0x4f9264: 0x32603  sra         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9260) {
            ctx->pc = 0x4F9240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f9240;
        }
    }
    ctx->pc = 0x4F9268u;
label_4f9268:
    // 0x4f9268: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9268u;
        // 0x4f926c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9270u;
}
