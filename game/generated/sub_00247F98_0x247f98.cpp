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

// Function: sub_00247F98
// Address: 0x247f98 - 0x248050
void sub_00247F98_0x247f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F98_0x247f98");
#endif

    switch (ctx->pc) {
        case 0x247fc8u: goto label_247fc8;
        case 0x248008u: goto label_248008;
        case 0x248018u: goto label_248018;
        case 0x248028u: goto label_248028;
        case 0x248038u: goto label_248038;
        default: break;
    }

    ctx->pc = 0x247f98u;

    // 0x247f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247fac: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x247facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x247fb0: 0x8e110074  lw          $s1, 0x74($s0)
    ctx->pc = 0x247fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x247fb4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x247fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x247fb8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x247FB8u;
    {
        const bool branch_taken_0x247fb8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x247fb8) {
            ctx->pc = 0x247FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247FB8u;
            // 0x247fbc: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247FCCu;
            goto label_247fcc;
        }
    }
    ctx->pc = 0x247FC0u;
    // 0x247fc0: 0xc091968  jal         func_2465A0
    ctx->pc = 0x247FC0u;
    SET_GPR_U32(ctx, 31, 0x247FC8u);
    ctx->pc = 0x247FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247FC0u;
    // 0x247fc4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2465A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2465A0u, 0x247FC0u, 0x247FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FC8u;
label_247fc8:
    // 0x247fc8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x247fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_247fcc:
    // 0x247fcc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247fd0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x247fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247fd4: 0x1071000e  beq         $v1, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x247FD4u;
    {
        const bool branch_taken_0x247fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x247fd4) {
            ctx->pc = 0x248010u;
            goto label_248010;
        }
    }
    ctx->pc = 0x247FDCu;
    // 0x247fdc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x247FDCu;
    {
        const bool branch_taken_0x247fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FDCu;
        // 0x247fe0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fdc) {
            ctx->pc = 0x248000u;
            goto label_248000;
        }
    }
    ctx->pc = 0x247FE4u;
    // 0x247fe4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x247FE4u;
    {
        const bool branch_taken_0x247fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FE4u;
        // 0x247fe8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fe4) {
            ctx->pc = 0x248020u;
            goto label_248020;
        }
    }
    ctx->pc = 0x247FECu;
    // 0x247fec: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x247FECu;
    {
        const bool branch_taken_0x247fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247fec) {
            ctx->pc = 0x248030u;
            goto label_248030;
        }
    }
    ctx->pc = 0x247FF4u;
    // 0x247ff4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x247FF4u;
    {
        const bool branch_taken_0x247ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FF4u;
        // 0x247ff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ff4) {
            ctx->pc = 0x248040u;
            goto label_248040;
        }
    }
    ctx->pc = 0x247FFCu;
    // 0x247ffc: 0x0  nop
    ctx->pc = 0x247ffcu;
    // NOP
label_248000:
    // 0x248000: 0xc091e8a  jal         func_247A28
    ctx->pc = 0x248000u;
    SET_GPR_U32(ctx, 31, 0x248008u);
    ctx->pc = 0x248004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248000u;
    // 0x248004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A28u, 0x248000u, 0x248008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248008u;
label_248008:
    // 0x248008: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x248008u;
    {
        const bool branch_taken_0x248008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248008u;
        // 0x24800c: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248008) {
            ctx->pc = 0x24803Cu;
            goto label_24803c;
        }
    }
    ctx->pc = 0x248010u;
label_248010:
    // 0x248010: 0xc091f06  jal         func_247C18
    ctx->pc = 0x248010u;
    SET_GPR_U32(ctx, 31, 0x248018u);
    ctx->pc = 0x248014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248010u;
    // 0x248014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C18u, 0x248010u, 0x248018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248018u;
label_248018:
    // 0x248018: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x248018u;
    {
        const bool branch_taken_0x248018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248018u;
        // 0x24801c: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248018) {
            ctx->pc = 0x24803Cu;
            goto label_24803c;
        }
    }
    ctx->pc = 0x248020u;
label_248020:
    // 0x248020: 0xc091f52  jal         func_247D48
    ctx->pc = 0x248020u;
    SET_GPR_U32(ctx, 31, 0x248028u);
    ctx->pc = 0x248024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248020u;
    // 0x248024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D48u, 0x248020u, 0x248028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248028u;
label_248028:
    // 0x248028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x248028u;
    {
        const bool branch_taken_0x248028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248028u;
        // 0x24802c: 0xae110080  sw          $s1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248028) {
            ctx->pc = 0x24803Cu;
            goto label_24803c;
        }
    }
    ctx->pc = 0x248030u;
label_248030:
    // 0x248030: 0xc091fac  jal         func_247EB0
    ctx->pc = 0x248030u;
    SET_GPR_U32(ctx, 31, 0x248038u);
    ctx->pc = 0x248034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248030u;
    // 0x248034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247EB0u, 0x248030u, 0x248038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248038u;
label_248038:
    // 0x248038: 0xae110080  sw          $s1, 0x80($s0)
    ctx->pc = 0x248038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 17));
label_24803c:
    // 0x24803c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24803cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248040:
    // 0x248040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248048: 0x3e00008  jr          $ra
    ctx->pc = 0x248048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248048u;
        // 0x24804c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248050u;
}
