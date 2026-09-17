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

// Function: sub_0024D8A8
// Address: 0x24d8a8 - 0x24d9c0
void sub_0024D8A8_0x24d8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D8A8_0x24d8a8");
#endif

    switch (ctx->pc) {
        case 0x24d984u: goto label_24d984;
        default: break;
    }

    ctx->pc = 0x24d8a8u;

    // 0x24d8a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24d8ac: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x24d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x24d8b0: 0x2448fb00  addiu       $t0, $v0, -0x500
    ctx->pc = 0x24d8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x24d8b4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x24d8b8: 0x30a53ff0  andi        $a1, $a1, 0x3FF0
    ctx->pc = 0x24d8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16368);
    // 0x24d8bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24d8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d8c0: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x24d8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24d8c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24d8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x24d8c8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x24d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x24d8cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d8ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d8d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x24d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x24d8d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d8dc: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x24d8dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x24d8e0: 0x2ce90003  sltiu       $t1, $a3, 0x3
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d8e4: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x24d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x24d8e8: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x24d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x24d8ec: 0xa500000c  sh          $zero, 0xC($t0)
    ctx->pc = 0x24d8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x24d8f0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x24d8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x24d8f4: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x24d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x24d8f8: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24D8F8u;
    {
        const bool branch_taken_0x24d8f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x24D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8F8u;
        // 0x24d8fc: 0xa107000e  sb          $a3, 0xE($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 14), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8f8) {
            ctx->pc = 0x24D940u;
            goto label_24d940;
        }
    }
    ctx->pc = 0x24D900u;
    // 0x24d900: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D900u;
    {
        const bool branch_taken_0x24d900 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D900u;
        // 0x24d904: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d900) {
            ctx->pc = 0x24D920u;
            goto label_24d920;
        }
    }
    ctx->pc = 0x24D908u;
    // 0x24d908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d90c: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D90Cu;
    {
        const bool branch_taken_0x24d90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d90c) {
            ctx->pc = 0x24D910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D90Cu;
            // 0x24d910: 0x30c63ff0  andi        $a2, $a2, 0x3FF0 (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16368);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D930u;
            goto label_24d930;
        }
    }
    ctx->pc = 0x24D914u;
    // 0x24d914: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24D914u;
    {
        const bool branch_taken_0x24d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d914) {
            ctx->pc = 0x24D97Cu;
            goto label_24d97c;
        }
    }
    ctx->pc = 0x24D91Cu;
    // 0x24d91c: 0x0  nop
    ctx->pc = 0x24d91cu;
    // NOP
label_24d920:
    // 0x24d920: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24D920u;
    {
        const bool branch_taken_0x24d920 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D920u;
        // 0x24d924: 0x24025555  addiu       $v0, $zero, 0x5555 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d920) {
            ctx->pc = 0x24D958u;
            goto label_24d958;
        }
    }
    ctx->pc = 0x24D928u;
    // 0x24d928: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24D928u;
    {
        const bool branch_taken_0x24d928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d928) {
            ctx->pc = 0x24D97Cu;
            goto label_24d97c;
        }
    }
    ctx->pc = 0x24D930u;
label_24d930:
    // 0x24d930: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x24d930u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x24d934: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x24D934u;
    {
        const bool branch_taken_0x24d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D934u;
        // 0x24d938: 0xa506000c  sh          $a2, 0xC($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d934) {
            ctx->pc = 0x24D97Cu;
            goto label_24d97c;
        }
    }
    ctx->pc = 0x24D93Cu;
    // 0x24d93c: 0x0  nop
    ctx->pc = 0x24d93cu;
    // NOP
label_24d940:
    // 0x24d940: 0x30463ff0  andi        $a2, $v0, 0x3FF0
    ctx->pc = 0x24d940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16368);
    // 0x24d944: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x24d944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x24d948: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x24d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24d94c: 0xa506000c  sh          $a2, 0xC($t0)
    ctx->pc = 0x24d94cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x24d950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24D950u;
    {
        const bool branch_taken_0x24d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D950u;
        // 0x24d954: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d950) {
            ctx->pc = 0x24D97Cu;
            goto label_24d97c;
        }
    }
    ctx->pc = 0x24D958u;
label_24d958:
    // 0x24d958: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x24d958u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x24d95c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x24d95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24d960: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x24d960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x24d964: 0x30463ff0  andi        $a2, $v0, 0x3FF0
    ctx->pc = 0x24d964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16368);
    // 0x24d968: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x24d968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24d96c: 0xa506000c  sh          $a2, 0xC($t0)
    ctx->pc = 0x24d96cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x24d970: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x24d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24d974: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x24d974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x24d978: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x24d978u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_24d97c:
    // 0x24d97c: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x24D97Cu;
    SET_GPR_U32(ctx, 31, 0x24D984u);
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x24D97Cu, 0x24D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D984u;
label_24d984:
    // 0x24d984: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x24d988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d98c: 0x3e00008  jr          $ra
    ctx->pc = 0x24D98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D98Cu;
        // 0x24d990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D994u;
    // 0x24d994: 0x0  nop
    ctx->pc = 0x24d994u;
    // NOP
    // 0x24d998: 0x3e00008  jr          $ra
    ctx->pc = 0x24D998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9A0u;
    // 0x24d9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9A8u;
    // 0x24d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9B0u;
    // 0x24d9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24D9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9B8u;
    // 0x24d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D9C0u;
}
