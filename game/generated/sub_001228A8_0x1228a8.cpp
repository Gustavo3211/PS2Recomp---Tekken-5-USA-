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

// Function: sub_001228A8
// Address: 0x1228a8 - 0x122958
void sub_001228A8_0x1228a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001228A8_0x1228a8");
#endif

    switch (ctx->pc) {
        case 0x1228c4u: goto label_1228c4;
        case 0x1228f0u: goto label_1228f0;
        default: break;
    }

    ctx->pc = 0x1228a8u;

    // 0x1228a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1228a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1228ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1228acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1228b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1228b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1228b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1228b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1228b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1228bc: 0xc049334  jal         func_124CD0
    ctx->pc = 0x1228BCu;
    SET_GPR_U32(ctx, 31, 0x1228C4u);
    ctx->pc = 0x1228C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228BCu;
    // 0x1228c0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124CD0u, 0x1228BCu, 0x1228C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228C4u;
label_1228c4:
    // 0x1228c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1228c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228c8: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1228C8u;
    {
        const bool branch_taken_0x1228c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228c8) {
            ctx->pc = 0x1228CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1228C8u;
            // 0x1228cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122948u;
            goto label_122948;
        }
    }
    ctx->pc = 0x1228D0u;
    // 0x1228d0: 0x960203f8  lhu         $v0, 0x3F8($s0)
    ctx->pc = 0x1228d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x1228d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1228d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1228d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1228dc: 0x804303fc  lb          $v1, 0x3FC($v0)
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1020)));
    // 0x1228e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1228E0u;
    {
        const bool branch_taken_0x1228e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228E0u;
        // 0x1228e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228e0) {
            ctx->pc = 0x122908u;
            goto label_122908;
        }
    }
    ctx->pc = 0x1228E8u;
    // 0x1228e8: 0xc0489ec  jal         func_1227B0
    ctx->pc = 0x1228E8u;
    SET_GPR_U32(ctx, 31, 0x1228F0u);
    ctx->pc = 0x1228ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228E8u;
    // 0x1228ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1227B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1227B0u, 0x1228E8u, 0x1228F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228F0u;
label_1228f0:
    // 0x1228f0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1228f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1228f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1228f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1228f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1228f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1228fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1228FCu;
    {
        const bool branch_taken_0x1228fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228FCu;
        // 0x122900: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228fc) {
            ctx->pc = 0x122910u;
            goto label_122910;
        }
    }
    ctx->pc = 0x122904u;
    // 0x122904: 0x0  nop
    ctx->pc = 0x122904u;
    // NOP
label_122908:
    // 0x122908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x122908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12290c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12290cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_122910:
    // 0x122910: 0x82020477  lb          $v0, 0x477($s0)
    ctx->pc = 0x122910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1143)));
    // 0x122914: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x122914u;
    {
        const bool branch_taken_0x122914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122914) {
            ctx->pc = 0x122918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122914u;
            // 0x122918: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122934u;
            goto label_122934;
        }
    }
    ctx->pc = 0x12291Cu;
    // 0x12291c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122920: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x122920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x122924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x122924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x122928: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x122928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12292c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x12292cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x122930: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122934:
    // 0x122934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122938: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x122938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12293c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x122940: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x122940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x122944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122948:
    // 0x122948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12294c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122950: 0x3e00008  jr          $ra
    ctx->pc = 0x122950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122950u;
        // 0x122954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122958u;
}
