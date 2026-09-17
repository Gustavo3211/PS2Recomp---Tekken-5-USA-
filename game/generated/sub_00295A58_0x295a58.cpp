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

// Function: sub_00295A58
// Address: 0x295a58 - 0x295b08
void sub_00295A58_0x295a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295A58_0x295a58");
#endif

    switch (ctx->pc) {
        case 0x295a70u: goto label_295a70;
        case 0x295a84u: goto label_295a84;
        case 0x295a98u: goto label_295a98;
        case 0x295aa8u: goto label_295aa8;
        case 0x295abcu: goto label_295abc;
        case 0x295af0u: goto label_295af0;
        default: break;
    }

    ctx->pc = 0x295a58u;

    // 0x295a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x295a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x295a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295a68: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x295A68u;
    SET_GPR_U32(ctx, 31, 0x295A70u);
    ctx->pc = 0x295A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A68u;
    // 0x295a6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x295A68u, 0x295A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A70u;
label_295a70:
    // 0x295a70: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x295a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x295a74: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x295a78: 0x2463e240  addiu       $v1, $v1, -0x1DC0
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959680));
    // 0x295a7c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x295A7Cu;
    SET_GPR_U32(ctx, 31, 0x295A84u);
    ctx->pc = 0x295A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A7Cu;
    // 0x295a80: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x295A7Cu, 0x295A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A84u;
label_295a84:
    // 0x295a84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x295a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a88: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x295a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x295a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a90: 0xc089636  jal         func_2258D8
    ctx->pc = 0x295A90u;
    SET_GPR_U32(ctx, 31, 0x295A98u);
    ctx->pc = 0x295A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A90u;
    // 0x295a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x295A90u, 0x295A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A98u;
label_295a98:
    // 0x295a98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295a9c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x295aa0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x295AA0u;
    SET_GPR_U32(ctx, 31, 0x295AA8u);
    ctx->pc = 0x295AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AA0u;
    // 0x295aa4: 0x8c508880  lw          $s0, -0x7780($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x295AA0u, 0x295AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AA8u;
label_295aa8:
    // 0x295aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x295aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ab0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x295ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x295ab4: 0xc089636  jal         func_2258D8
    ctx->pc = 0x295AB4u;
    SET_GPR_U32(ctx, 31, 0x295ABCu);
    ctx->pc = 0x295AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AB4u;
    // 0x295ab8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x295AB4u, 0x295ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295ABCu;
label_295abc:
    // 0x295abc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x295abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x295ac0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x295ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x295ac4: 0x2463ba70  addiu       $v1, $v1, -0x4590
    ctx->pc = 0x295ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949488));
    // 0x295ac8: 0xa6200150  sh          $zero, 0x150($s1)
    ctx->pc = 0x295ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 336), (uint16_t)GPR_U32(ctx, 0));
    // 0x295acc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x295ACCu;
    {
        const bool branch_taken_0x295acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295ACCu;
        // 0x295ad0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295acc) {
            ctx->pc = 0x295B10u;
            return;
        }
    }
    ctx->pc = 0x295AD4u;
    // 0x295ad4: 0x0  nop
    ctx->pc = 0x295ad4u;
    // NOP
    // 0x295ad8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x295ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x295adc: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x295adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x295ae0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x295ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x295ae4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295ae8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x295AE8u;
    SET_GPR_U32(ctx, 31, 0x295AF0u);
    ctx->pc = 0x295AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295AE8u;
    // 0x295aec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x295AE8u, 0x295AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AF0u;
label_295af0:
    // 0x295af0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x295af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x295af4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x295af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x295af8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x295af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x295afc: 0x2484fea8  addiu       $a0, $a0, -0x158
    ctx->pc = 0x295afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966952));
    // 0x295b00: 0xc048b90  jal         func_122E40
    ctx->pc = 0x295B00u;
    SET_GPR_U32(ctx, 31, 0x295B08u);
    ctx->pc = 0x295B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B00u;
    // 0x295b04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x295B00u, 0x295B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B08u;
}
