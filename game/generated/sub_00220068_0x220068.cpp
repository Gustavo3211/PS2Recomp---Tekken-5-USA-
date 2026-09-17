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

// Function: sub_00220068
// Address: 0x220068 - 0x220100
void sub_00220068_0x220068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220068_0x220068");
#endif

    switch (ctx->pc) {
        case 0x2200a8u: goto label_2200a8;
        case 0x2200c8u: goto label_2200c8;
        case 0x2200e8u: goto label_2200e8;
        default: break;
    }

    ctx->pc = 0x220068u;

    // 0x220068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22006c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x220070: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220074: 0x30920001  andi        $s2, $a0, 0x1
    ctx->pc = 0x220074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x220078: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x22007c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220080: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x220084: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x220084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x220088: 0x8c8488d0  lw          $a0, -0x7730($a0)
    ctx->pc = 0x220088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936784)));
    // 0x22008c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220090: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x220094: 0x8c508408  lw          $s0, -0x7BF8($v0)
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935560)));
    // 0x220098: 0x84910042  lh          $s1, 0x42($a0)
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x22009c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200a0: 0xc087fb8  jal         func_21FEE0
    ctx->pc = 0x2200A0u;
    SET_GPR_U32(ctx, 31, 0x2200A8u);
    ctx->pc = 0x2200A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200A0u;
    // 0x2200a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEE0u, 0x2200A0u, 0x2200A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200A8u;
label_2200a8:
    // 0x2200a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2200a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2200acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2200b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2200b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2200B8u;
    {
        const bool branch_taken_0x2200b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2200BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200B8u;
        // 0x2200bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200b8) {
            ctx->pc = 0x2200E8u;
            goto label_2200e8;
        }
    }
    ctx->pc = 0x2200C0u;
    // 0x2200c0: 0xc08806a  jal         func_2201A8
    ctx->pc = 0x2200C0u;
    SET_GPR_U32(ctx, 31, 0x2200C8u);
    ctx->pc = 0x2201A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201A8u, 0x2200C0u, 0x2200C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200C8u;
label_2200c8:
    // 0x2200c8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2200c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2200cc: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x2200d0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2200d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2200d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2200d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2200dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200e0: 0xc0a4e16  jal         func_293858
    ctx->pc = 0x2200E0u;
    SET_GPR_U32(ctx, 31, 0x2200E8u);
    ctx->pc = 0x2200E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200E0u;
    // 0x2200e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293858u, 0x2200E0u, 0x2200E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200E8u;
label_2200e8:
    // 0x2200e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2200e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2200ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2200ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2200f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2200f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2200f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2200f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2200f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2200F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2200FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200F8u;
        // 0x2200fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2200F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220100u;
}
