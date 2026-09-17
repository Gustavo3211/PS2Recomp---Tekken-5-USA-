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

// Function: sub_002D4AA8
// Address: 0x2d4aa8 - 0x2d4b08
void sub_002D4AA8_0x2d4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4AA8_0x2d4aa8");
#endif

    switch (ctx->pc) {
        case 0x2d4accu: goto label_2d4acc;
        case 0x2d4ad4u: goto label_2d4ad4;
        case 0x2d4adcu: goto label_2d4adc;
        case 0x2d4ae4u: goto label_2d4ae4;
        case 0x2d4aecu: goto label_2d4aec;
        case 0x2d4af4u: goto label_2d4af4;
        default: break;
    }

    ctx->pc = 0x2d4aa8u;

    // 0x2d4aa8: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2d4aac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ab8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d4ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2d4abc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4ABCu;
    {
        const bool branch_taken_0x2d4abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4ABCu;
        // 0x2d4ac0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4abc) {
            ctx->pc = 0x2D4AF4u;
            goto label_2d4af4;
        }
    }
    ctx->pc = 0x2D4AC4u;
    // 0x2d4ac4: 0xc0b52ce  jal         func_2D4B38
    ctx->pc = 0x2D4AC4u;
    SET_GPR_U32(ctx, 31, 0x2D4ACCu);
    ctx->pc = 0x2D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4B38u, 0x2D4AC4u, 0x2D4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4ACCu;
label_2d4acc:
    // 0x2d4acc: 0xc0b5312  jal         func_2D4C48
    ctx->pc = 0x2D4ACCu;
    SET_GPR_U32(ctx, 31, 0x2D4AD4u);
    ctx->pc = 0x2D4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4ACCu;
    // 0x2d4ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4C48u, 0x2D4ACCu, 0x2D4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AD4u;
label_2d4ad4:
    // 0x2d4ad4: 0xc0b5500  jal         func_2D5400
    ctx->pc = 0x2D4AD4u;
    SET_GPR_U32(ctx, 31, 0x2D4ADCu);
    ctx->pc = 0x2D4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AD4u;
    // 0x2d4ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5400u, 0x2D4AD4u, 0x2D4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4ADCu;
label_2d4adc:
    // 0x2d4adc: 0xc0b5458  jal         func_2D5160
    ctx->pc = 0x2D4ADCu;
    SET_GPR_U32(ctx, 31, 0x2D4AE4u);
    ctx->pc = 0x2D4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4ADCu;
    // 0x2d4ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5160u, 0x2D4ADCu, 0x2D4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AE4u;
label_2d4ae4:
    // 0x2d4ae4: 0xc0b5580  jal         func_2D5600
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AE4u;
    // 0x2d4ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5600u, 0x2D4AE4u, 0x2D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AECu;
label_2d4aec:
    // 0x2d4aec: 0xc0b56e0  jal         func_2D5B80
    ctx->pc = 0x2D4AECu;
    SET_GPR_U32(ctx, 31, 0x2D4AF4u);
    ctx->pc = 0x2D4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AECu;
    // 0x2d4af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5B80u, 0x2D4AECu, 0x2D4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AF4u;
label_2d4af4:
    // 0x2d4af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4af8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4AFCu;
        // 0x2d4b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4B04u;
    // 0x2d4b04: 0x0  nop
    ctx->pc = 0x2d4b04u;
    // NOP
    ctx->pc = 0x2d4b08u;
}
