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

// Function: sub_002A4A68
// Address: 0x2a4a68 - 0x2a4b78
void sub_002A4A68_0x2a4a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4A68_0x2a4a68");
#endif

    switch (ctx->pc) {
        case 0x2a4a8cu: goto label_2a4a8c;
        case 0x2a4accu: goto label_2a4acc;
        case 0x2a4ae0u: goto label_2a4ae0;
        case 0x2a4af8u: goto label_2a4af8;
        case 0x2a4b0cu: goto label_2a4b0c;
        case 0x2a4b24u: goto label_2a4b24;
        case 0x2a4b38u: goto label_2a4b38;
        case 0x2a4b60u: goto label_2a4b60;
        default: break;
    }

    ctx->pc = 0x2a4a68u;

    // 0x2a4a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4a70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a4a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4a78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4a80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a4a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a4a84: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x2A4A84u;
    SET_GPR_U32(ctx, 31, 0x2A4A8Cu);
    ctx->pc = 0x2A4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A84u;
    // 0x2a4a88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x2A4A84u, 0x2A4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A8Cu;
label_2a4a8c:
    // 0x2a4a8c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a4a90: 0x2463e6c0  addiu       $v1, $v1, -0x1940
    ctx->pc = 0x2a4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960832));
    // 0x2a4a94: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x2a4a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2a4a98: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2a4a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2a4a9c: 0xae30017c  sw          $s0, 0x17C($s1)
    ctx->pc = 0x2a4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 16));
    // 0x2a4aa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4AA0u;
    {
        const bool branch_taken_0x2a4aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AA0u;
        // 0x2a4aa4: 0xae320154  sw          $s2, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4aa0) {
            ctx->pc = 0x2A4AB8u;
            goto label_2a4ab8;
        }
    }
    ctx->pc = 0x2A4AA8u;
    // 0x2a4aa8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2a4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a4aac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4AACu;
    {
        const bool branch_taken_0x2a4aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4AACu;
        // 0x2a4ab0: 0x2650ffdf  addiu       $s0, $s2, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4aac) {
            ctx->pc = 0x2A4AC0u;
            goto label_2a4ac0;
        }
    }
    ctx->pc = 0x2A4AB4u;
    // 0x2a4ab4: 0x0  nop
    ctx->pc = 0x2a4ab4u;
    // NOP
label_2a4ab8:
    // 0x2a4ab8: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2a4abc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2a4abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4ac0:
    // 0x2a4ac0: 0xae220150  sw          $v0, 0x150($s1)
    ctx->pc = 0x2a4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
    // 0x2a4ac4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4AC4u;
    SET_GPR_U32(ctx, 31, 0x2A4ACCu);
    ctx->pc = 0x2A4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AC4u;
    // 0x2a4ac8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4AC4u, 0x2A4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4ACCu;
label_2a4acc:
    // 0x2a4acc: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x2a4accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2a4ad0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ad8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A4AD8u;
    SET_GPR_U32(ctx, 31, 0x2A4AE0u);
    ctx->pc = 0x2A4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AD8u;
    // 0x2a4adc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A4AD8u, 0x2A4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AE0u;
label_2a4ae0:
    // 0x2a4ae0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2a4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2a4ae4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2a4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2a4ae8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4AE8u;
    {
        const bool branch_taken_0x2a4ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4ae8) {
            ctx->pc = 0x2A4AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4AE8u;
            // 0x2a4aec: 0x3863003a  xori        $v1, $v1, 0x3A (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)58);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B14u;
            goto label_2a4b14;
        }
    }
    ctx->pc = 0x2A4AF0u;
    // 0x2a4af0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4AF0u;
    SET_GPR_U32(ctx, 31, 0x2A4AF8u);
    ctx->pc = 0x2A4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AF0u;
    // 0x2a4af4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4AF0u, 0x2A4AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AF8u;
label_2a4af8:
    // 0x2a4af8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4afc: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x2a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a4b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b04: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A4B04u;
    SET_GPR_U32(ctx, 31, 0x2A4B0Cu);
    ctx->pc = 0x2A4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B04u;
    // 0x2a4b08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A4B04u, 0x2A4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B0Cu;
label_2a4b0c:
    // 0x2a4b0c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2a4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2a4b10: 0x3863003a  xori        $v1, $v1, 0x3A
    ctx->pc = 0x2a4b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)58);
label_2a4b14:
    // 0x2a4b14: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a4b18: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x2a4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2a4b1c: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2A4B1Cu;
    SET_GPR_U32(ctx, 31, 0x2A4B24u);
    ctx->pc = 0x2A4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B1Cu;
    // 0x2a4b20: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2A4B1Cu, 0x2A4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B24u;
label_2a4b24:
    // 0x2a4b24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b2c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x2a4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2a4b30: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2A4B30u;
    SET_GPR_U32(ctx, 31, 0x2A4B38u);
    ctx->pc = 0x2A4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B30u;
    // 0x2a4b34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2A4B30u, 0x2A4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B38u;
label_2a4b38:
    // 0x2a4b38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a4b3c: 0x2463da28  addiu       $v1, $v1, -0x25D8
    ctx->pc = 0x2a4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957608));
    // 0x2a4b40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A4B40u;
    {
        const bool branch_taken_0x2a4b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B40u;
        // 0x2a4b44: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4b40) {
            ctx->pc = 0x2A4B80u;
            return;
        }
    }
    ctx->pc = 0x2A4B48u;
    // 0x2a4b48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a4b4c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2a4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2a4b50: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2a4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2a4b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4b58: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2A4B58u;
    SET_GPR_U32(ctx, 31, 0x2A4B60u);
    ctx->pc = 0x2A4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B58u;
    // 0x2a4b5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2A4B58u, 0x2A4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B60u;
label_2a4b60:
    // 0x2a4b60: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a4b64: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a4b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a4b68: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a4b6c: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x2a4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x2a4b70: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A4B70u;
    SET_GPR_U32(ctx, 31, 0x2A4B78u);
    ctx->pc = 0x2A4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B70u;
    // 0x2a4b74: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A4B70u, 0x2A4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B78u;
}
