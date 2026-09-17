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

// Function: sub_002E2248
// Address: 0x2e2248 - 0x2e2320
void sub_002E2248_0x2e2248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2248_0x2e2248");
#endif

    switch (ctx->pc) {
        case 0x2e2274u: goto label_2e2274;
        case 0x2e22f0u: goto label_2e22f0;
        case 0x2e2304u: goto label_2e2304;
        default: break;
    }

    ctx->pc = 0x2e2248u;

    // 0x2e2248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e2248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e224c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e2250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e2250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e2254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e2254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2258: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e2258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e225c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e225cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e2264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e2268: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x2e2268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2e226c: 0xc0b8762  jal         func_2E1D88
    ctx->pc = 0x2E226Cu;
    SET_GPR_U32(ctx, 31, 0x2E2274u);
    ctx->pc = 0x2E2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E226Cu;
    // 0x2e2270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1D88u, 0x2E226Cu, 0x2E2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2274u;
label_2e2274:
    // 0x2e2274: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2e2274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2e2278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e2278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e227c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2280: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2e2280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2e2284: 0x24e74a30  addiu       $a3, $a3, 0x4A30
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18992));
    // 0x2e2288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e2288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e228c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2290: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E2290u;
    {
        const bool branch_taken_0x2e2290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2290u;
        // 0x2e2294: 0x34c60005  ori         $a2, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2290) {
            ctx->pc = 0x2E22E8u;
            goto label_2e22e8;
        }
    }
    ctx->pc = 0x2E2298u;
    // 0x2e2298: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2298u;
    {
        const bool branch_taken_0x2e2298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2298) {
            ctx->pc = 0x2E229Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2298u;
            // 0x2e229c: 0x3c070015  lui         $a3, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E22B8u;
            goto label_2e22b8;
        }
    }
    ctx->pc = 0x2E22A0u;
    // 0x2e22a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e22a4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E22A4u;
    {
        const bool branch_taken_0x2e22a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22A4u;
        // 0x2e22a8: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22a4) {
            ctx->pc = 0x2E22D0u;
            goto label_2e22d0;
        }
    }
    ctx->pc = 0x2E22ACu;
    // 0x2e22ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E22ACu;
    {
        const bool branch_taken_0x2e22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22ACu;
        // 0x2e22b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22ac) {
            ctx->pc = 0x2E22FCu;
            goto label_2e22fc;
        }
    }
    ctx->pc = 0x2E22B4u;
    // 0x2e22b4: 0x0  nop
    ctx->pc = 0x2e22b4u;
    // NOP
label_2e22b8:
    // 0x2e22b8: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2e22b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2e22bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e22bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e22c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22c4: 0x24e74a30  addiu       $a3, $a3, 0x4A30
    ctx->pc = 0x2e22c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18992));
    // 0x2e22c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E22C8u;
    {
        const bool branch_taken_0x2e22c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E22CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22C8u;
        // 0x2e22cc: 0x34c60004  ori         $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22c8) {
            ctx->pc = 0x2E22E8u;
            goto label_2e22e8;
        }
    }
    ctx->pc = 0x2E22D0u;
label_2e22d0:
    // 0x2e22d0: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x2e22d4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2e22d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2e22d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e22dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e22dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22e0: 0x24e74a30  addiu       $a3, $a3, 0x4A30
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18992));
    // 0x2e22e4: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x2e22e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
label_2e22e8:
    // 0x2e22e8: 0xc089248  jal         func_224920
    ctx->pc = 0x2E22E8u;
    SET_GPR_U32(ctx, 31, 0x2E22F0u);
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2E22E8u, 0x2E22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22F0u;
label_2e22f0:
    // 0x2e22f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e22f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22f4: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x2e22f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x2e22f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e22f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e22fc:
    // 0x2e22fc: 0xc0be9ac  jal         func_2FA6B0
    ctx->pc = 0x2E22FCu;
    SET_GPR_U32(ctx, 31, 0x2E2304u);
    ctx->pc = 0x2E2300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22FCu;
    // 0x2e2300: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6B0u, 0x2E22FCu, 0x2E2304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2304u;
label_2e2304:
    // 0x2e2304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e230c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e230cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2310: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e2310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e2314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e2318: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2318u;
        // 0x2e231c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2320u;
}
