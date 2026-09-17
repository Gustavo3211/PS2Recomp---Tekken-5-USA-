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

// Function: sub_0025FDB8
// Address: 0x25fdb8 - 0x25fe60
void sub_0025FDB8_0x25fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FDB8_0x25fdb8");
#endif

    switch (ctx->pc) {
        case 0x25fdd8u: goto label_25fdd8;
        case 0x25fe04u: goto label_25fe04;
        case 0x25fe18u: goto label_25fe18;
        case 0x25fe3cu: goto label_25fe3c;
        default: break;
    }

    ctx->pc = 0x25fdb8u;

    // 0x25fdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fdc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25fdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25fdc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25fdcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x25fdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x25fdd0: 0xc097f68  jal         func_25FDA0
    ctx->pc = 0x25FDD0u;
    SET_GPR_U32(ctx, 31, 0x25FDD8u);
    ctx->pc = 0x25FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDD0u;
    // 0x25fdd4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDA0u, 0x25FDD0u, 0x25FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FDD8u;
label_25fdd8:
    // 0x25fdd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25fdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fde0: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x25FDE0u;
    {
        const bool branch_taken_0x25fde0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDE0u;
        // 0x25fde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fde0) {
            ctx->pc = 0x25FE10u;
            goto label_25fe10;
        }
    }
    ctx->pc = 0x25FDE8u;
    // 0x25fde8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x25fde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fdec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25fdecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fdf0: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25FDF0u;
    {
        const bool branch_taken_0x25fdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25fdf0) {
            ctx->pc = 0x25FDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FDF0u;
            // 0x25fdf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FE44u;
            goto label_25fe44;
        }
    }
    ctx->pc = 0x25FDF8u;
    // 0x25fdf8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25fdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fdfc: 0xc04a125  jal         func_128494
    ctx->pc = 0x25FDFCu;
    SET_GPR_U32(ctx, 31, 0x25FE04u);
    ctx->pc = 0x25FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FDFCu;
    // 0x25fe00: 0x94a60002  lhu         $a2, 0x2($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x25FDFCu, 0x25FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE04u;
label_25fe04:
    // 0x25fe04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FE04u;
    {
        const bool branch_taken_0x25fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE04u;
        // 0x25fe08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe04) {
            ctx->pc = 0x25FE44u;
            goto label_25fe44;
        }
    }
    ctx->pc = 0x25FE0Cu;
    // 0x25fe0c: 0x0  nop
    ctx->pc = 0x25fe0cu;
    // NOP
label_25fe10:
    // 0x25fe10: 0xc097f54  jal         func_25FD50
    ctx->pc = 0x25FE10u;
    SET_GPR_U32(ctx, 31, 0x25FE18u);
    ctx->pc = 0x25FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FD50u, 0x25FE10u, 0x25FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE18u;
label_25fe18:
    // 0x25fe18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fe1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe20: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FE20u;
    {
        const bool branch_taken_0x25fe20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE20u;
        // 0x25fe24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe20) {
            ctx->pc = 0x25FE44u;
            goto label_25fe44;
        }
    }
    ctx->pc = 0x25FE28u;
    // 0x25fe28: 0x92100000  lbu         $s0, 0x0($s0)
    ctx->pc = 0x25fe28u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25fe2c: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x25fe2cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x25fe30: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25fe30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25fe34: 0xc04a125  jal         func_128494
    ctx->pc = 0x25FE34u;
    SET_GPR_U32(ctx, 31, 0x25FE3Cu);
    ctx->pc = 0x25FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FE34u;
    // 0x25fe38: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128494u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128494u, 0x25FE34u, 0x25FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE3Cu;
label_25fe3c:
    // 0x25fe3c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x25fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x25fe40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fe44:
    // 0x25fe44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fe44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25fe48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25fe4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25fe4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fe50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x25fe50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE54u;
        // 0x25fe58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE5Cu;
    // 0x25fe5c: 0x0  nop
    ctx->pc = 0x25fe5cu;
    // NOP
    ctx->pc = 0x25fe60u;
}
