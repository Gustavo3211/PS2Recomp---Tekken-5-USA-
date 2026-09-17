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

// Function: sub_00338098
// Address: 0x338098 - 0x338150
void sub_00338098_0x338098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338098_0x338098");
#endif

    switch (ctx->pc) {
        case 0x3380e4u: goto label_3380e4;
        case 0x338120u: goto label_338120;
        case 0x33812cu: goto label_33812c;
        default: break;
    }

    ctx->pc = 0x338098u;

label_338098:
    // 0x338098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33809c: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x3380a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3380a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3380a4: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x3380a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3380a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3380a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3380ac: 0x308303ff  andi        $v1, $a0, 0x3FF
    ctx->pc = 0x3380acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x3380b0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3380B0u;
    {
        const bool branch_taken_0x3380b0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380B0u;
        // 0x3380b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380b0) {
            ctx->pc = 0x3380C4u;
            goto label_3380c4;
        }
    }
    ctx->pc = 0x3380B8u;
    // 0x3380b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3380bc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3380BCu;
    {
        const bool branch_taken_0x3380bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3380bc) {
            ctx->pc = 0x3380C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3380BCu;
            // 0x3380c0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3380D0u;
            goto label_3380d0;
        }
    }
    ctx->pc = 0x3380C4u;
label_3380c4:
    // 0x3380c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3380C4u;
    {
        const bool branch_taken_0x3380c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3380C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380C4u;
        // 0x3380c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380c4) {
            ctx->pc = 0x3380F4u;
            goto label_3380f4;
        }
    }
    ctx->pc = 0x3380CCu;
    // 0x3380cc: 0x0  nop
    ctx->pc = 0x3380ccu;
    // NOP
label_3380d0:
    // 0x3380d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3380d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3380d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3380D4u;
    {
        const bool branch_taken_0x3380d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380D4u;
        // 0x3380d8: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380d4) {
            ctx->pc = 0x3380F0u;
            goto label_3380f0;
        }
    }
    ctx->pc = 0x3380DCu;
    // 0x3380dc: 0xc0cde82  jal         func_337A08
    ctx->pc = 0x3380DCu;
    SET_GPR_U32(ctx, 31, 0x3380E4u);
    ctx->pc = 0x337A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A08u, 0x3380DCu, 0x3380E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380E4u;
label_3380e4:
    // 0x3380e4: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3380e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3380e8: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3380e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3380ec: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x3380ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_3380f0:
    // 0x3380f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3380f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3380f4:
    // 0x3380f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3380f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3380f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3380f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3380fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3380fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338100: 0x3e00008  jr          $ra
    ctx->pc = 0x338100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338100u;
        // 0x338104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338108u;
    // 0x338108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33810c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x338114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x338118: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x338118u;
    SET_GPR_U32(ctx, 31, 0x338120u);
    ctx->pc = 0x33811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338118u;
    // 0x33811c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x338118u, 0x338120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338120u;
label_338120:
    // 0x338120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338124: 0xc0ce026  jal         func_338098
    ctx->pc = 0x338124u;
    SET_GPR_U32(ctx, 31, 0x33812Cu);
    ctx->pc = 0x338128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338124u;
    // 0x338128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338098u;
    goto label_338098;
    ctx->pc = 0x33812Cu;
label_33812c:
    // 0x33812c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33812Cu;
    {
        const bool branch_taken_0x33812c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33812Cu;
        // 0x338130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33812c) {
            ctx->pc = 0x338140u;
            goto label_338140;
        }
    }
    ctx->pc = 0x338134u;
    // 0x338134: 0xf  sync
    ctx->pc = 0x338134u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x338138: 0x42000038  ei
    ctx->pc = 0x338138u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33813c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33813cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338140:
    // 0x338140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x338144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338148: 0x3e00008  jr          $ra
    ctx->pc = 0x338148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338148u;
        // 0x33814c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338150u;
}
