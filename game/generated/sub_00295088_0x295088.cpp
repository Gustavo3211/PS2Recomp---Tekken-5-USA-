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

// Function: sub_00295088
// Address: 0x295088 - 0x295140
void sub_00295088_0x295088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295088_0x295088");
#endif

    switch (ctx->pc) {
        case 0x2950f8u: goto label_2950f8;
        case 0x295110u: goto label_295110;
        default: break;
    }

    ctx->pc = 0x295088u;

    // 0x295088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29508c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x29508cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295090: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x295090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295094: 0x2cc40021  sltiu       $a0, $a2, 0x21
    ctx->pc = 0x295094u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x295098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29509c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2950a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2950A0u;
    {
        const bool branch_taken_0x2950a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950A0u;
        // 0x2950a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950a0) {
            ctx->pc = 0x295128u;
            goto label_295128;
        }
    }
    ctx->pc = 0x2950A8u;
    // 0x2950a8: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2950A8u;
    {
        const bool branch_taken_0x2950a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950A8u;
        // 0x2950ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950a8) {
            ctx->pc = 0x29512Cu;
            goto label_29512c;
        }
    }
    ctx->pc = 0x2950B0u;
    // 0x2950b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2950b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2950b4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2950b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2950b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2950bc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2950bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2950c0: 0x8c50015c  lw          $s0, 0x15C($v0)
    ctx->pc = 0x2950c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2950c4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2950C4u;
    {
        const bool branch_taken_0x2950c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950C4u;
        // 0x2950c8: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950c4) {
            ctx->pc = 0x295128u;
            goto label_295128;
        }
    }
    ctx->pc = 0x2950CCu;
    // 0x2950cc: 0x50c00012  beql        $a2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2950CCu;
    {
        const bool branch_taken_0x2950cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950cc) {
            ctx->pc = 0x2950D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2950CCu;
            // 0x2950d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295118u;
            goto label_295118;
        }
    }
    ctx->pc = 0x2950D4u;
    // 0x2950d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2950d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2950d8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2950d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2950dc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2950dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2950e0: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x2950e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x2950e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2950e8: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x2950e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x2950ec: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x2950ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2950f0: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x2950F0u;
    SET_GPR_U32(ctx, 31, 0x2950F8u);
    ctx->pc = 0x2950F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950F0u;
    // 0x2950f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x2950F0u, 0x2950F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950F8u;
label_2950f8:
    // 0x2950f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2950f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2950fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295100: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295100u;
    {
        const bool branch_taken_0x295100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295100u;
        // 0x295104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295100) {
            ctx->pc = 0x295128u;
            goto label_295128;
        }
    }
    ctx->pc = 0x295108u;
    // 0x295108: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x295108u;
    SET_GPR_U32(ctx, 31, 0x295110u);
    ctx->pc = 0x29510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295108u;
    // 0x29510c: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x295108u, 0x295110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295110u;
label_295110:
    // 0x295110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x295110u;
    {
        const bool branch_taken_0x295110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295110u;
        // 0x295114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295110) {
            ctx->pc = 0x29512Cu;
            goto label_29512c;
        }
    }
    ctx->pc = 0x295118u;
label_295118:
    // 0x295118: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x295118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29511c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x295120: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x295120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295124: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x295124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_295128:
    // 0x295128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29512c:
    // 0x29512c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29512cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x295130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295134: 0x3e00008  jr          $ra
    ctx->pc = 0x295134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295134u;
        // 0x295138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29513Cu;
    // 0x29513c: 0x0  nop
    ctx->pc = 0x29513cu;
    // NOP
    ctx->pc = 0x295140u;
}
