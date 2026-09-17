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

// Function: sub_0022B118
// Address: 0x22b118 - 0x22b198
void sub_0022B118_0x22b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B118_0x22b118");
#endif

    switch (ctx->pc) {
        case 0x22b140u: goto label_22b140;
        case 0x22b180u: goto label_22b180;
        default: break;
    }

    ctx->pc = 0x22b118u;

    // 0x22b118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b11c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22b120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22b12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b138: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22B138u;
    SET_GPR_U32(ctx, 31, 0x22B140u);
    ctx->pc = 0x22B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B138u;
    // 0x22b13c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22B138u, 0x22B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B140u;
label_22b140:
    // 0x22b140: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22b140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22b144: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22b148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22b14c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22b150: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22b154: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B154u;
    {
        const bool branch_taken_0x22b154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B154u;
        // 0x22b158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b154) {
            ctx->pc = 0x22B16Cu;
            goto label_22b16c;
        }
    }
    ctx->pc = 0x22B15Cu;
    // 0x22b15c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22b160: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b164: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B164u;
    {
        const bool branch_taken_0x22b164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22b164) {
            ctx->pc = 0x22B178u;
            goto label_22b178;
        }
    }
    ctx->pc = 0x22B16Cu;
label_22b16c:
    // 0x22b16c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b174: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22b174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22b178:
    // 0x22b178: 0xc0b89ae  jal         func_2E26B8
    ctx->pc = 0x22B178u;
    SET_GPR_U32(ctx, 31, 0x22B180u);
    ctx->pc = 0x2E26B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E26B8u, 0x22B178u, 0x22B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B180u;
label_22b180:
    // 0x22b180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22b184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22b188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B18Cu;
        // 0x22b190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B194u;
    // 0x22b194: 0x0  nop
    ctx->pc = 0x22b194u;
    // NOP
    ctx->pc = 0x22b198u;
}
