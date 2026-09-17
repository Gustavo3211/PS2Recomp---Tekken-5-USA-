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

// Function: sub_001F3908
// Address: 0x1f3908 - 0x1f39a8
void sub_001F3908_0x1f3908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3908_0x1f3908");
#endif

    switch (ctx->pc) {
        case 0x1f3954u: goto label_1f3954;
        case 0x1f3998u: goto label_1f3998;
        default: break;
    }

    ctx->pc = 0x1f3908u;

    // 0x1f3908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f3908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f390c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f3910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3914: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x1f3918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f3918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f391c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3920: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1f3920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x1f3924: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F3924u;
    {
        const bool branch_taken_0x1f3924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3924u;
        // 0x1f3928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3924) {
            ctx->pc = 0x1F399Cu;
            goto label_1f399c;
        }
    }
    ctx->pc = 0x1F392Cu;
    // 0x1f392c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f3930: 0x8e0283c0  lw          $v0, -0x7C40($s0)
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f3934: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1f3934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1f3938: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F3938u;
    {
        const bool branch_taken_0x1f3938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3938) {
            ctx->pc = 0x1F393Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3938u;
            // 0x1f393c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F399Cu;
            goto label_1f399c;
        }
    }
    ctx->pc = 0x1F3940u;
    // 0x1f3940: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f3944: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3944u;
    {
        const bool branch_taken_0x1f3944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3944) {
            ctx->pc = 0x1F3948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3944u;
            // 0x1f3948: 0x8e0283c0  lw          $v0, -0x7C40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F395Cu;
            goto label_1f395c;
        }
    }
    ctx->pc = 0x1F394Cu;
    // 0x1f394c: 0xc09244c  jal         func_249130
    ctx->pc = 0x1F394Cu;
    SET_GPR_U32(ctx, 31, 0x1F3954u);
    ctx->pc = 0x1F3950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F394Cu;
    // 0x1f3950: 0x8ca40028  lw          $a0, 0x28($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249130u, 0x1F394Cu, 0x1F3954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3954u;
label_1f3954:
    // 0x1f3954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3958: 0x8e0283c0  lw          $v0, -0x7C40($s0)
    ctx->pc = 0x1f3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935488)));
label_1f395c:
    // 0x1f395c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f3960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3960u;
    {
        const bool branch_taken_0x1f3960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3960u;
        // 0x1f3964: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3960) {
            ctx->pc = 0x1F3978u;
            goto label_1f3978;
        }
    }
    ctx->pc = 0x1F3968u;
    // 0x1f3968: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f396c: 0x3882000b  xori        $v0, $a0, 0xB
    ctx->pc = 0x1f396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)11);
    // 0x1f3970: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1f3970u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1f3974: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1f3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1f3978:
    // 0x1f3978: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3978u;
    {
        const bool branch_taken_0x1f3978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3978u;
        // 0x1f397c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3978) {
            ctx->pc = 0x1F3990u;
            goto label_1f3990;
        }
    }
    ctx->pc = 0x1F3980u;
    // 0x1f3980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f3984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3988: 0x8092472  j           func_2491C8
    ctx->pc = 0x1F3988u;
    ctx->pc = 0x1F398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3988u;
    // 0x1f398c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491C8u;
    sub_002491C8_0x2491c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1F3990u;
label_1f3990:
    // 0x1f3990: 0xc092486  jal         func_249218
    ctx->pc = 0x1F3990u;
    SET_GPR_U32(ctx, 31, 0x1F3998u);
    ctx->pc = 0x1F3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3990u;
    // 0x1f3994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x1F3990u, 0x1F3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3998u;
label_1f3998:
    // 0x1f3998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f399c:
    // 0x1f399c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f39a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F39A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39A0u;
        // 0x1f39a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F39A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F39A8u;
}
