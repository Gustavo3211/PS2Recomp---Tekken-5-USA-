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

// Function: sub_002ECD98
// Address: 0x2ecd98 - 0x2ece48
void sub_002ECD98_0x2ecd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECD98_0x2ecd98");
#endif

    switch (ctx->pc) {
        case 0x2ecdc0u: goto label_2ecdc0;
        case 0x2ecdf4u: goto label_2ecdf4;
        case 0x2ece2cu: goto label_2ece2c;
        default: break;
    }

    ctx->pc = 0x2ecd98u;

    // 0x2ecd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ecd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ecd9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ecda0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ecda4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ecda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecdac: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2ecdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2ecdb0: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2ecdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2ecdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ecdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ecdb8: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2ECDB8u;
    SET_GPR_U32(ctx, 31, 0x2ECDC0u);
    ctx->pc = 0x2ECDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECDB8u;
    // 0x2ecdbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2ECDB8u, 0x2ECDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDC0u;
label_2ecdc0:
    // 0x2ecdc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ecdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ecdc4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ecdc8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECDC8u;
    {
        const bool branch_taken_0x2ecdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDC8u;
        // 0x2ecdcc: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdc8) {
            ctx->pc = 0x2ECDE0u;
            goto label_2ecde0;
        }
    }
    ctx->pc = 0x2ECDD0u;
    // 0x2ecdd0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecdd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ecdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ecdd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECDD8u;
    {
        const bool branch_taken_0x2ecdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecdd8) {
            ctx->pc = 0x2ECDECu;
            goto label_2ecdec;
        }
    }
    ctx->pc = 0x2ECDE0u;
label_2ecde0:
    // 0x2ecde0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ecde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ecde4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecde8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ecde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ecdec:
    // 0x2ecdec: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2ECDECu;
    SET_GPR_U32(ctx, 31, 0x2ECDF4u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2ECDECu, 0x2ECDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECDF4u;
label_2ecdf4:
    // 0x2ecdf4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ecdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ecdf8: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2ecdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2ecdfc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ecdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ece00: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECE00u;
    {
        const bool branch_taken_0x2ece00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE00u;
        // 0x2ece04: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece00) {
            ctx->pc = 0x2ECE18u;
            goto label_2ece18;
        }
    }
    ctx->pc = 0x2ECE08u;
    // 0x2ece08: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ece08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ece0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ece0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ece10: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECE10u;
    {
        const bool branch_taken_0x2ece10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ece10) {
            ctx->pc = 0x2ECE24u;
            goto label_2ece24;
        }
    }
    ctx->pc = 0x2ECE18u;
label_2ece18:
    // 0x2ece18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ece18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ece1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ece1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece20: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ece20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ece24:
    // 0x2ece24: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2ECE24u;
    SET_GPR_U32(ctx, 31, 0x2ECE2Cu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2ECE24u, 0x2ECE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE2Cu;
label_2ece2c:
    // 0x2ece2c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2ece2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2ece30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ece30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ece34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ece34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ece38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ece38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ece3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE3Cu;
        // 0x2ece40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECE44u;
    // 0x2ece44: 0x0  nop
    ctx->pc = 0x2ece44u;
    // NOP
    ctx->pc = 0x2ece48u;
}
