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

// Function: sub_00119C88
// Address: 0x119c88 - 0x119d28
void sub_00119C88_0x119c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119C88_0x119c88");
#endif

    switch (ctx->pc) {
        case 0x119cf0u: goto label_119cf0;
        default: break;
    }

    ctx->pc = 0x119c88u;

    // 0x119c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119c8c: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x119c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x119c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119c98: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x119c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x119c9c: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119C9Cu;
    {
        const bool branch_taken_0x119c9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x119CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C9Cu;
        // 0x119ca0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c9c) {
            ctx->pc = 0x119CB4u;
            goto label_119cb4;
        }
    }
    ctx->pc = 0x119CA4u;
    // 0x119ca4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119ca8: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x119cac: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x119CACu;
    {
        const bool branch_taken_0x119cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x119cac) {
            ctx->pc = 0x119CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119CACu;
            // 0x119cb0: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119CC0u;
            goto label_119cc0;
        }
    }
    ctx->pc = 0x119CB4u;
label_119cb4:
    // 0x119cb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119cb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x119CB8u;
    {
        const bool branch_taken_0x119cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CB8u;
        // 0x119cbc: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cb8) {
            ctx->pc = 0x119D14u;
            goto label_119d14;
        }
    }
    ctx->pc = 0x119CC0u;
label_119cc0:
    // 0x119cc0: 0x24512148  addiu       $s1, $v0, 0x2148
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8520));
    // 0x119cc4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x119cc8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119CC8u;
    {
        const bool branch_taken_0x119cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x119cc8) {
            ctx->pc = 0x119CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119CC8u;
            // 0x119ccc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119CDCu;
            goto label_119cdc;
        }
    }
    ctx->pc = 0x119CD0u;
    // 0x119cd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119cd4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x119CD4u;
    {
        const bool branch_taken_0x119cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CD4u;
        // 0x119cd8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cd4) {
            ctx->pc = 0x119D14u;
            goto label_119d14;
        }
    }
    ctx->pc = 0x119CDCu;
label_119cdc:
    // 0x119cdc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x119cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x119ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119CE0u;
    {
        const bool branch_taken_0x119ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ce0) {
            ctx->pc = 0x119CF0u;
            goto label_119cf0;
        }
    }
    ctx->pc = 0x119CE8u;
    // 0x119ce8: 0xc046608  jal         func_119820
    ctx->pc = 0x119CE8u;
    SET_GPR_U32(ctx, 31, 0x119CF0u);
    ctx->pc = 0x119CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CE8u;
    // 0x119cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119820u, 0x119CE8u, 0x119CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CF0u;
label_119cf0:
    // 0x119cf0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x119cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x119cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cf8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x119cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x119cfc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x119cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x119d00: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x119d04: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x119d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x119d08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x119d0c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x119d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x119d10: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x119d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_119d14:
    // 0x119d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119d18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d20: 0x3e00008  jr          $ra
    ctx->pc = 0x119D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D20u;
        // 0x119d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D28u;
}
