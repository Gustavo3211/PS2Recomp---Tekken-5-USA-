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

// Function: sub_0024B0B0
// Address: 0x24b0b0 - 0x24b160
void sub_0024B0B0_0x24b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B0B0_0x24b0b0");
#endif

    switch (ctx->pc) {
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b0f8u: goto label_24b0f8;
        case 0x24b110u: goto label_24b110;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b13cu: goto label_24b13c;
        default: break;
    }

    ctx->pc = 0x24b0b0u;

    // 0x24b0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24b0b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24b0b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24b0b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24b0c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24b0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24b0c8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24b0c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b0d4: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x24B0D4u;
    {
        const bool branch_taken_0x24b0d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0D4u;
        // 0x24b0d8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0d4) {
            ctx->pc = 0x24B13Cu;
            goto label_24b13c;
        }
    }
    ctx->pc = 0x24B0DCu;
    // 0x24b0dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b0e0: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24B0E0u;
    {
        const bool branch_taken_0x24b0e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0E0u;
        // 0x24b0e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0e0) {
            ctx->pc = 0x24B13Cu;
            goto label_24b13c;
        }
    }
    ctx->pc = 0x24B0E8u;
    // 0x24b0e8: 0xc091b20  jal         func_246C80
    ctx->pc = 0x24B0E8u;
    SET_GPR_U32(ctx, 31, 0x24B0F0u);
    ctx->pc = 0x24B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0E8u;
    // 0x24b0ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246C80u, 0x24B0E8u, 0x24B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0F0u;
label_24b0f0:
    // 0x24b0f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24B0F0u;
    SET_GPR_U32(ctx, 31, 0x24B0F8u);
    ctx->pc = 0x24B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0F0u;
    // 0x24b0f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24B0F0u, 0x24B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0F8u;
label_24b0f8:
    // 0x24b0f8: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x24b0f8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x24b0fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24b100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b104: 0x8810  mfhi        $s1
    ctx->pc = 0x24b104u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x24b108: 0xc091b34  jal         func_246CD0
    ctx->pc = 0x24B108u;
    SET_GPR_U32(ctx, 31, 0x24B110u);
    ctx->pc = 0x24B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B108u;
    // 0x24b10c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CD0u, 0x24B108u, 0x24B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B110u;
label_24b110:
    // 0x24b110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24b114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b118: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24b118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b11c: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B11Cu;
    {
        const bool branch_taken_0x24b11c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x24B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B11Cu;
        // 0x24b120: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b11c) {
            ctx->pc = 0x24B13Cu;
            goto label_24b13c;
        }
    }
    ctx->pc = 0x24B124u;
    // 0x24b124: 0xc091b56  jal         func_246D58
    ctx->pc = 0x24B124u;
    SET_GPR_U32(ctx, 31, 0x24B12Cu);
    ctx->pc = 0x246D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246D58u, 0x24B124u, 0x24B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B12Cu;
label_24b12c:
    // 0x24b12c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24b12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b130: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24b130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b134: 0xc0929c2  jal         func_24A708
    ctx->pc = 0x24B134u;
    SET_GPR_U32(ctx, 31, 0x24B13Cu);
    ctx->pc = 0x24B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B134u;
    // 0x24b138: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A708u, 0x24B134u, 0x24B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B13Cu;
label_24b13c:
    // 0x24b13c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b148: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24b148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b14c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24b14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b150: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24b150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24b154: 0x3e00008  jr          $ra
    ctx->pc = 0x24B154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B154u;
        // 0x24b158: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B15Cu;
    // 0x24b15c: 0x0  nop
    ctx->pc = 0x24b15cu;
    // NOP
    ctx->pc = 0x24b160u;
}
