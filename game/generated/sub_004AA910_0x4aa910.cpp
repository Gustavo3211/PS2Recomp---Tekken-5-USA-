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

// Function: sub_004AA910
// Address: 0x4aa910 - 0x4aab10
void sub_004AA910_0x4aa910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA910_0x4aa910");
#endif

    switch (ctx->pc) {
        case 0x4aa938u: goto label_4aa938;
        case 0x4aa950u: goto label_4aa950;
        case 0x4aa964u: goto label_4aa964;
        case 0x4aa9b8u: goto label_4aa9b8;
        case 0x4aa9d0u: goto label_4aa9d0;
        case 0x4aa9e4u: goto label_4aa9e4;
        case 0x4aaa38u: goto label_4aaa38;
        case 0x4aaa50u: goto label_4aaa50;
        case 0x4aaa64u: goto label_4aaa64;
        case 0x4aaab8u: goto label_4aaab8;
        case 0x4aaad0u: goto label_4aaad0;
        case 0x4aaae4u: goto label_4aaae4;
        default: break;
    }

    ctx->pc = 0x4aa910u;

    // 0x4aa910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa92c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa930: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA930u;
    SET_GPR_U32(ctx, 31, 0x4AA938u);
    ctx->pc = 0x4AA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA930u;
    // 0x4aa934: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA930u, 0x4AA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA938u;
label_4aa938:
    // 0x4aa938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa93c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa944: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa948: 0xc12a9d4  jal         func_4AA750
    ctx->pc = 0x4AA948u;
    SET_GPR_U32(ctx, 31, 0x4AA950u);
    ctx->pc = 0x4AA94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA948u;
    // 0x4aa94c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA750u, 0x4AA948u, 0x4AA950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA950u;
label_4aa950:
    // 0x4aa950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa958: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa95c: 0xc12a9bc  jal         func_4AA6F0
    ctx->pc = 0x4AA95Cu;
    SET_GPR_U32(ctx, 31, 0x4AA964u);
    ctx->pc = 0x4AA960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA95Cu;
    // 0x4aa960: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA6F0u, 0x4AA95Cu, 0x4AA964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA964u;
label_4aa964:
    // 0x4aa964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa970: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa974: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa978: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa97c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa97cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa988: 0x812a9ec  j           func_4AA7B0
    ctx->pc = 0x4AA988u;
    ctx->pc = 0x4AA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA988u;
    // 0x4aa98c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    sub_004AA7B0_0x4aa7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA990u;
    // 0x4aa990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa9a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa9ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa9b0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA9B0u;
    SET_GPR_U32(ctx, 31, 0x4AA9B8u);
    ctx->pc = 0x4AA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA9B0u;
    // 0x4aa9b4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA9B0u, 0x4AA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA9B8u;
label_4aa9b8:
    // 0x4aa9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9c8: 0xc12a9d4  jal         func_4AA750
    ctx->pc = 0x4AA9C8u;
    SET_GPR_U32(ctx, 31, 0x4AA9D0u);
    ctx->pc = 0x4AA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA9C8u;
    // 0x4aa9cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA750u, 0x4AA9C8u, 0x4AA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA9D0u;
label_4aa9d0:
    // 0x4aa9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9dc: 0xc12a9ec  jal         func_4AA7B0
    ctx->pc = 0x4AA9DCu;
    SET_GPR_U32(ctx, 31, 0x4AA9E4u);
    ctx->pc = 0x4AA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA9DCu;
    // 0x4aa9e0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA7B0u, 0x4AA9DCu, 0x4AA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA9E4u;
label_4aa9e4:
    // 0x4aa9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa9f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa9f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa9f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa9f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa9fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aaa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aaa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaa04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aaa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aaa08: 0x812a9bc  j           func_4AA6F0
    ctx->pc = 0x4AAA08u;
    ctx->pc = 0x4AAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA08u;
    // 0x4aaa0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    sub_004AA6F0_0x4aa6f0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AAA10u;
    // 0x4aaa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aaa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aaa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aaa18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aaa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aaa1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aaa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aaa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aaa24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aaa24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aaa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aaa2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aaa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aaa30: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AAA30u;
    SET_GPR_U32(ctx, 31, 0x4AAA38u);
    ctx->pc = 0x4AAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA30u;
    // 0x4aaa34: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AAA30u, 0x4AAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAA38u;
label_4aaa38:
    // 0x4aaa38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aaa38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaa44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa48: 0xc12a9ec  jal         func_4AA7B0
    ctx->pc = 0x4AAA48u;
    SET_GPR_U32(ctx, 31, 0x4AAA50u);
    ctx->pc = 0x4AAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA48u;
    // 0x4aaa4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA7B0u, 0x4AAA48u, 0x4AAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAA50u;
label_4aaa50:
    // 0x4aaa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa5c: 0xc12a9bc  jal         func_4AA6F0
    ctx->pc = 0x4AAA5Cu;
    SET_GPR_U32(ctx, 31, 0x4AAA64u);
    ctx->pc = 0x4AAA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA5Cu;
    // 0x4aaa60: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA6F0u, 0x4AAA5Cu, 0x4AAA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAA64u;
label_4aaa64:
    // 0x4aaa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aaa6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aaa70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaa70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aaa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaa78: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aaa78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaa7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aaa7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aaa80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aaa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaa84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aaa84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aaa88: 0x812a9d4  j           func_4AA750
    ctx->pc = 0x4AAA88u;
    ctx->pc = 0x4AAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAA88u;
    // 0x4aaa8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    sub_004AA750_0x4aa750(rdram, ctx, runtime); return;
    ctx->pc = 0x4AAA90u;
    // 0x4aaa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aaa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aaa94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aaa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aaa98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aaa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aaa9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aaa9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaaa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aaaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aaaa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aaaa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaaa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aaaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aaaac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aaaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aaab0: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AAAB0u;
    SET_GPR_U32(ctx, 31, 0x4AAAB8u);
    ctx->pc = 0x4AAAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAAB0u;
    // 0x4aaab4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AAAB0u, 0x4AAAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAAB8u;
label_4aaab8:
    // 0x4aaab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aaab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaabc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaac4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaac8: 0xc12a9ec  jal         func_4AA7B0
    ctx->pc = 0x4AAAC8u;
    SET_GPR_U32(ctx, 31, 0x4AAAD0u);
    ctx->pc = 0x4AAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAAC8u;
    // 0x4aaacc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA7B0u, 0x4AAAC8u, 0x4AAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAAD0u;
label_4aaad0:
    // 0x4aaad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaadc: 0xc12a9d4  jal         func_4AA750
    ctx->pc = 0x4AAADCu;
    SET_GPR_U32(ctx, 31, 0x4AAAE4u);
    ctx->pc = 0x4AAAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAADCu;
    // 0x4aaae0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA750u, 0x4AAADCu, 0x4AAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAAE4u;
label_4aaae4:
    // 0x4aaae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aaae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aaae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaaec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aaaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aaaf0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aaaf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaaf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aaaf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaaf8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aaaf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaafc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aaafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aab00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aab00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aab04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aab08: 0x812a9bc  j           func_4AA6F0
    ctx->pc = 0x4AAB08u;
    ctx->pc = 0x4AAB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAB08u;
    // 0x4aab0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA6F0u;
    sub_004AA6F0_0x4aa6f0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AAB10u;
}
