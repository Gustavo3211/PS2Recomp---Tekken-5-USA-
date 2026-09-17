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

// Function: sub_0011A110
// Address: 0x11a110 - 0x11a1a8
void sub_0011A110_0x11a110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A110_0x11a110");
#endif

    switch (ctx->pc) {
        case 0x11a170u: goto label_11a170;
        case 0x11a17cu: goto label_11a17c;
        case 0x11a18cu: goto label_11a18c;
        default: break;
    }

    ctx->pc = 0x11a110u;

label_11a110:
    // 0x11a110: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x11a110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x11a114: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A114u;
    {
        const bool branch_taken_0x11a114 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A114u;
        // 0x11a118: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a114) {
            ctx->pc = 0x11A12Cu;
            goto label_11a12c;
        }
    }
    ctx->pc = 0x11A11Cu;
    // 0x11a11c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11a120: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x11a124: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A124u;
    {
        const bool branch_taken_0x11a124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11a124) {
            ctx->pc = 0x11A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A124u;
            // 0x11a128: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A134u;
            goto label_11a134;
        }
    }
    ctx->pc = 0x11A12Cu;
label_11a12c:
    // 0x11a12c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A12Cu;
        // 0x11a130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A134u;
label_11a134:
    // 0x11a134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11a138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A138u;
    {
        const bool branch_taken_0x11a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a138) {
            ctx->pc = 0x11A150u;
            goto label_11a150;
        }
    }
    ctx->pc = 0x11A140u;
    // 0x11a140: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x11a140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x11a144: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x11a144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11a148: 0x3e00008  jr          $ra
    ctx->pc = 0x11A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A148u;
        // 0x11a14c: 0x43102f  dsubu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A150u;
label_11a150:
    // 0x11a150: 0x3e00008  jr          $ra
    ctx->pc = 0x11A150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A150u;
        // 0x11a154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A158u;
    // 0x11a158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a160: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a168: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11A168u;
    SET_GPR_U32(ctx, 31, 0x11A170u);
    ctx->pc = 0x11A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A168u;
    // 0x11a16c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11A168u, 0x11A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A170u;
label_11a170:
    // 0x11a170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a174: 0xc046844  jal         func_11A110
    ctx->pc = 0x11A174u;
    SET_GPR_U32(ctx, 31, 0x11A17Cu);
    ctx->pc = 0x11A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A174u;
    // 0x11a178: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A110u;
    goto label_11a110;
    ctx->pc = 0x11A17Cu;
label_11a17c:
    // 0x11a17c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A17Cu;
    {
        const bool branch_taken_0x11a17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A17Cu;
        // 0x11a180: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a17c) {
            ctx->pc = 0x11A18Cu;
            goto label_11a18c;
        }
    }
    ctx->pc = 0x11A184u;
    // 0x11a184: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11A184u;
    SET_GPR_U32(ctx, 31, 0x11A18Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11A184u, 0x11A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A18Cu;
label_11a18c:
    // 0x11a18c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a19c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A19Cu;
        // 0x11a1a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A1A4u;
    // 0x11a1a4: 0x0  nop
    ctx->pc = 0x11a1a4u;
    // NOP
    ctx->pc = 0x11a1a8u;
}
