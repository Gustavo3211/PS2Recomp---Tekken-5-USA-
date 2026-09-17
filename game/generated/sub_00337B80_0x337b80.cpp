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

// Function: sub_00337B80
// Address: 0x337b80 - 0x337c20
void sub_00337B80_0x337b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337B80_0x337b80");
#endif

    switch (ctx->pc) {
        case 0x337be8u: goto label_337be8;
        default: break;
    }

    ctx->pc = 0x337b80u;

    // 0x337b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337b84: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x337b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x337b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337b8c: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x337b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x337b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337b94: 0x308303ff  andi        $v1, $a0, 0x3FF
    ctx->pc = 0x337b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x337b98: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337B98u;
    {
        const bool branch_taken_0x337b98 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x337B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B98u;
        // 0x337b9c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b98) {
            ctx->pc = 0x337BACu;
            goto label_337bac;
        }
    }
    ctx->pc = 0x337BA0u;
    // 0x337ba0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x337ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337ba4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337BA4u;
    {
        const bool branch_taken_0x337ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337BA4u;
        // 0x337ba8: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ba4) {
            ctx->pc = 0x337BB8u;
            goto label_337bb8;
        }
    }
    ctx->pc = 0x337BACu;
label_337bac:
    // 0x337bac: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337bb0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x337BB0u;
    {
        const bool branch_taken_0x337bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337BB0u;
        // 0x337bb4: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337bb0) {
            ctx->pc = 0x337C0Cu;
            goto label_337c0c;
        }
    }
    ctx->pc = 0x337BB8u;
label_337bb8:
    // 0x337bb8: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337bbc: 0x24710a60  addiu       $s1, $v1, 0xA60
    ctx->pc = 0x337bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2656));
    // 0x337bc0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x337bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x337bc4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x337bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x337bc8: 0x50640011  beql        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x337BC8u;
    {
        const bool branch_taken_0x337bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x337bc8) {
            ctx->pc = 0x337BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337BC8u;
            // 0x337bcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337C10u;
            goto label_337c10;
        }
    }
    ctx->pc = 0x337BD0u;
    // 0x337bd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x337bd4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x337bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x337bd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337BD8u;
    {
        const bool branch_taken_0x337bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337bd8) {
            ctx->pc = 0x337BE8u;
            goto label_337be8;
        }
    }
    ctx->pc = 0x337BE0u;
    // 0x337be0: 0xc0cddb6  jal         func_3376D8
    ctx->pc = 0x337BE0u;
    SET_GPR_U32(ctx, 31, 0x337BE8u);
    ctx->pc = 0x337BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337BE0u;
    // 0x337be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376D8u, 0x337BE0u, 0x337BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337BE8u;
label_337be8:
    // 0x337be8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x337be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x337bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337bf0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x337bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x337bf4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x337bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x337bf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x337bfc: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x337bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x337c00: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x337c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x337c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x337c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x337c08: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x337c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_337c0c:
    // 0x337c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337c10:
    // 0x337c10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337c18: 0x3e00008  jr          $ra
    ctx->pc = 0x337C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C18u;
        // 0x337c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337C20u;
}
