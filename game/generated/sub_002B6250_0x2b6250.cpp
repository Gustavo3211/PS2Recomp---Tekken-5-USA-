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

// Function: sub_002B6250
// Address: 0x2b6250 - 0x2b62f8
void sub_002B6250_0x2b6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6250_0x2b6250");
#endif

    switch (ctx->pc) {
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62b4u: goto label_2b62b4;
        case 0x2b62ccu: goto label_2b62cc;
        case 0x2b62e0u: goto label_2b62e0;
        default: break;
    }

    ctx->pc = 0x2b6250u;

    // 0x2b6250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6254: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b6258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b625c: 0x30d10100  andi        $s1, $a2, 0x100
    ctx->pc = 0x2b625cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x2b6260: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b6264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b626c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b6270: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x2b6274: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x2b6274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b6278: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2b6278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b627c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2b6280: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0xaca30074  sw          $v1, 0x74($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B62C0u;
            goto label_2b62c0;
        }
    }
    ctx->pc = 0x2B6288u;
    // 0x2b6288: 0x5620000e  bnel        $s1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6288u;
            // 0x2b628c: 0x8e060084  lw          $a2, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62C4u;
            goto label_2b62c4;
        }
    }
    ctx->pc = 0x2B6290u;
    // 0x2b6290: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2b6290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2b6294: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2b6294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2b6298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6298u;
    {
        const bool branch_taken_0x2b6298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6298) {
            ctx->pc = 0x2B62A8u;
            goto label_2b62a8;
        }
    }
    ctx->pc = 0x2B62A0u;
    // 0x2b62a0: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B62A0u;
    SET_GPR_U32(ctx, 31, 0x2B62A8u);
    ctx->pc = 0x2B62A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62A0u;
    // 0x2b62a4: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B62A0u, 0x2B62A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62A8u;
label_2b62a8:
    // 0x2b62a8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x2b62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b62ac: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B62ACu;
    SET_GPR_U32(ctx, 31, 0x2B62B4u);
    ctx->pc = 0x2B62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62ACu;
    // 0x2b62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B62ACu, 0x2B62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62B4u;
label_2b62b4:
    // 0x2b62b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B62B4u;
    {
        const bool branch_taken_0x2b62b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b62b4) {
            ctx->pc = 0x2B62CCu;
            goto label_2b62cc;
        }
    }
    ctx->pc = 0x2B62BCu;
    // 0x2b62bc: 0x0  nop
    ctx->pc = 0x2b62bcu;
    // NOP
label_2b62c0:
    // 0x2b62c0: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2b62c4:
    // 0x2b62c4: 0xc0ad8d4  jal         func_2B6350
    ctx->pc = 0x2B62C4u;
    SET_GPR_U32(ctx, 31, 0x2B62CCu);
    ctx->pc = 0x2B62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62C4u;
    // 0x2b62c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6350u, 0x2B62C4u, 0x2B62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62CCu;
label_2b62cc:
    // 0x2b62cc: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B62CCu;
    {
        const bool branch_taken_0x2b62cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b62cc) {
            ctx->pc = 0x2B62D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B62CCu;
            // 0x2b62d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62E4u;
            goto label_2b62e4;
        }
    }
    ctx->pc = 0x2B62D4u;
    // 0x2b62d4: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b62d8: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2B62D8u;
    SET_GPR_U32(ctx, 31, 0x2B62E0u);
    ctx->pc = 0x2B62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62D8u;
    // 0x2b62dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F8u, 0x2B62D8u, 0x2B62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62E0u;
label_2b62e0:
    // 0x2b62e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b62e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b62e4:
    // 0x2b62e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b62e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b62e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b62e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b62ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b62ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b62f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62F0u;
        // 0x2b62f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62F8u;
}
