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

// Function: sub_004A8660
// Address: 0x4a8660 - 0x4a8730
void sub_004A8660_0x4a8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8660_0x4a8660");
#endif

    switch (ctx->pc) {
        case 0x4a8690u: goto label_4a8690;
        case 0x4a86e0u: goto label_4a86e0;
        case 0x4a86f0u: goto label_4a86f0;
        case 0x4a8700u: goto label_4a8700;
        case 0x4a8710u: goto label_4a8710;
        default: break;
    }

    ctx->pc = 0x4a8660u;

    // 0x4a8660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a8664: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a8664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a8668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a8668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a866c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x4a866cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a8670: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x4a8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x4a8674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8678: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a8678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a867c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a8680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a8680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a8684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a8688: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4A8688u;
    SET_GPR_U32(ctx, 31, 0x4A8690u);
    ctx->pc = 0x4A868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8688u;
    // 0x4a868c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4A8688u, 0x4A8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8690u;
label_4a8690:
    // 0x4a8690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a8690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a8698: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A8698u;
    {
        const bool branch_taken_0x4a8698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8698u;
        // 0x4a869c: 0x32103ffe  andi        $s0, $s0, 0x3FFE (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16382);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8698) {
            ctx->pc = 0x4A86E8u;
            goto label_4a86e8;
        }
    }
    ctx->pc = 0x4A86A0u;
    // 0x4a86a0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4a86a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4a86a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A86A4u;
    {
        const bool branch_taken_0x4a86a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86A4u;
        // 0x4a86a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86a4) {
            ctx->pc = 0x4A86C0u;
            goto label_4a86c0;
        }
    }
    ctx->pc = 0x4A86ACu;
    // 0x4a86ac: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4A86ACu;
    {
        const bool branch_taken_0x4a86ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86ACu;
        // 0x4a86b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86ac) {
            ctx->pc = 0x4A86D8u;
            goto label_4a86d8;
        }
    }
    ctx->pc = 0x4A86B4u;
    // 0x4a86b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A86B4u;
    {
        const bool branch_taken_0x4a86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86B4u;
        // 0x4a86b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86b4) {
            ctx->pc = 0x4A871Cu;
            goto label_4a871c;
        }
    }
    ctx->pc = 0x4A86BCu;
    // 0x4a86bc: 0x0  nop
    ctx->pc = 0x4a86bcu;
    // NOP
label_4a86c0:
    // 0x4a86c0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4A86C0u;
    {
        const bool branch_taken_0x4a86c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86C0u;
        // 0x4a86c4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86c0) {
            ctx->pc = 0x4A86F8u;
            goto label_4a86f8;
        }
    }
    ctx->pc = 0x4A86C8u;
    // 0x4a86c8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A86C8u;
    {
        const bool branch_taken_0x4a86c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86C8u;
        // 0x4a86cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86c8) {
            ctx->pc = 0x4A8708u;
            goto label_4a8708;
        }
    }
    ctx->pc = 0x4A86D0u;
    // 0x4a86d0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4A86D0u;
    {
        const bool branch_taken_0x4a86d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86D0u;
        // 0x4a86d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86d0) {
            ctx->pc = 0x4A871Cu;
            goto label_4a871c;
        }
    }
    ctx->pc = 0x4A86D8u;
label_4a86d8:
    // 0x4a86d8: 0xc12a14a  jal         func_4A8528
    ctx->pc = 0x4A86D8u;
    SET_GPR_U32(ctx, 31, 0x4A86E0u);
    ctx->pc = 0x4A86DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86D8u;
    // 0x4a86dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8528u, 0x4A86D8u, 0x4A86E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A86E0u;
label_4a86e0:
    // 0x4a86e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A86E0u;
    {
        const bool branch_taken_0x4a86e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86E0u;
        // 0x4a86e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86e0) {
            ctx->pc = 0x4A8714u;
            goto label_4a8714;
        }
    }
    ctx->pc = 0x4A86E8u;
label_4a86e8:
    // 0x4a86e8: 0xc12a15c  jal         func_4A8570
    ctx->pc = 0x4A86E8u;
    SET_GPR_U32(ctx, 31, 0x4A86F0u);
    ctx->pc = 0x4A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86E8u;
    // 0x4a86ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8570u, 0x4A86E8u, 0x4A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A86F0u;
label_4a86f0:
    // 0x4a86f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A86F0u;
    {
        const bool branch_taken_0x4a86f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A86F0u;
        // 0x4a86f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a86f0) {
            ctx->pc = 0x4A8714u;
            goto label_4a8714;
        }
    }
    ctx->pc = 0x4A86F8u;
label_4a86f8:
    // 0x4a86f8: 0xc12a170  jal         func_4A85C0
    ctx->pc = 0x4A86F8u;
    SET_GPR_U32(ctx, 31, 0x4A8700u);
    ctx->pc = 0x4A86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A86F8u;
    // 0x4a86fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A85C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A85C0u, 0x4A86F8u, 0x4A8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8700u;
label_4a8700:
    // 0x4a8700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A8700u;
    {
        const bool branch_taken_0x4a8700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8700u;
        // 0x4a8704: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8700) {
            ctx->pc = 0x4A8714u;
            goto label_4a8714;
        }
    }
    ctx->pc = 0x4A8708u;
label_4a8708:
    // 0x4a8708: 0xc12a184  jal         func_4A8610
    ctx->pc = 0x4A8708u;
    SET_GPR_U32(ctx, 31, 0x4A8710u);
    ctx->pc = 0x4A870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8708u;
    // 0x4a870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8610u, 0x4A8708u, 0x4A8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8710u;
label_4a8710:
    // 0x4a8710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8714:
    // 0x4a8714: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a8714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a8718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a871c:
    // 0x4a871c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a871cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a8720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8724: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8724u;
        // 0x4a8728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A872Cu;
    // 0x4a872c: 0x0  nop
    ctx->pc = 0x4a872cu;
    // NOP
    ctx->pc = 0x4a8730u;
}
