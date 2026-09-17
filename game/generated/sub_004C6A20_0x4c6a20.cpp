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

// Function: sub_004C6A20
// Address: 0x4c6a20 - 0x4c6be8
void sub_004C6A20_0x4c6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6A20_0x4c6a20");
#endif

    switch (ctx->pc) {
        case 0x4c6a4cu: goto label_4c6a4c;
        case 0x4c6a68u: goto label_4c6a68;
        case 0x4c6aacu: goto label_4c6aac;
        case 0x4c6abcu: goto label_4c6abc;
        case 0x4c6b08u: goto label_4c6b08;
        case 0x4c6b40u: goto label_4c6b40;
        case 0x4c6b78u: goto label_4c6b78;
        case 0x4c6b98u: goto label_4c6b98;
        default: break;
    }

    ctx->pc = 0x4c6a20u;

    // 0x4c6a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c6a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c6a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c6a28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c6a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c6a2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c6a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6a30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c6a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c6a34: 0x26740138  addiu       $s4, $s3, 0x138
    ctx->pc = 0x4c6a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 312));
    // 0x4c6a38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c6a3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c6a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c6a40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4c6a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4c6a44: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4C6A44u;
    SET_GPR_U32(ctx, 31, 0x4C6A4Cu);
    ctx->pc = 0x4C6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6A44u;
    // 0x4c6a48: 0x267001b4  addiu       $s0, $s3, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4C6A44u, 0x4C6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6A4Cu;
label_4c6a4c:
    // 0x4c6a4c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4c6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4c6a50: 0xac620f1c  sw          $v0, 0xF1C($v1)
    ctx->pc = 0x4c6a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F1Cu, _value); } while (0);
    // 0x4c6a54: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c6a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6a58: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4C6A58u;
    {
        const bool branch_taken_0x4c6a58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6A58u;
        // 0x4c6a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6a58) {
            ctx->pc = 0x4C6AA4u;
            goto label_4c6aa4;
        }
    }
    ctx->pc = 0x4C6A60u;
    // 0x4c6a60: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C6A60u;
    SET_GPR_U32(ctx, 31, 0x4C6A68u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C6A60u, 0x4C6A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6A68u;
label_4c6a68:
    // 0x4c6a68: 0x2402041c  addiu       $v0, $zero, 0x41C
    ctx->pc = 0x4c6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
    // 0x4c6a6c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x4c6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4c6a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c6a74: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x4c6a74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6a78: 0xa6630158  sh          $v1, 0x158($s3)
    ctx->pc = 0x4c6a78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6a7c: 0xa6640148  sh          $a0, 0x148($s3)
    ctx->pc = 0x4c6a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 4));
    // 0x4c6a80: 0xa6600118  sh          $zero, 0x118($s3)
    ctx->pc = 0x4c6a80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a84: 0xa660011c  sh          $zero, 0x11C($s3)
    ctx->pc = 0x4c6a84u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a88: 0xa6600120  sh          $zero, 0x120($s3)
    ctx->pc = 0x4c6a88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a8c: 0xa6600136  sh          $zero, 0x136($s3)
    ctx->pc = 0x4c6a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a90: 0xa6600138  sh          $zero, 0x138($s3)
    ctx->pc = 0x4c6a90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a94: 0xa660013a  sh          $zero, 0x13A($s3)
    ctx->pc = 0x4c6a94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 314), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c6a98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c6a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6a9c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c6aa0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4c6aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4c6aa4:
    // 0x4c6aa4: 0xc12564a  jal         func_495928
    ctx->pc = 0x4C6AA4u;
    SET_GPR_U32(ctx, 31, 0x4C6AACu);
    ctx->pc = 0x4C6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6AA4u;
    // 0x4c6aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4C6AA4u, 0x4C6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6AACu;
label_4c6aac:
    // 0x4c6aac: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4C6AACu;
    {
        const bool branch_taken_0x4c6aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6AACu;
        // 0x4c6ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6aac) {
            ctx->pc = 0x4C6BC8u;
            goto label_4c6bc8;
        }
    }
    ctx->pc = 0x4C6AB4u;
    // 0x4c6ab4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4C6AB4u;
    SET_GPR_U32(ctx, 31, 0x4C6ABCu);
    ctx->pc = 0x4C6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6AB4u;
    // 0x4c6ab8: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4C6AB4u, 0x4C6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6ABCu;
label_4c6abc:
    // 0x4c6abc: 0x26640136  addiu       $a0, $s3, 0x136
    ctx->pc = 0x4c6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 310));
    // 0x4c6ac0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4c6ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6ac4: 0x26100f08  addiu       $s0, $s0, 0xF08
    ctx->pc = 0x4c6ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3848));
    // 0x4c6ac8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c6ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c6acc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4c6accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4c6ad0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4c6ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4c6ad4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4c6ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6ad8: 0x26310f0c  addiu       $s1, $s1, 0xF0C
    ctx->pc = 0x4c6ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3852));
    // 0x4c6adc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4c6adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c6ae0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4c6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4c6ae4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4c6ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6ae8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4c6ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c6aec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6af0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c6af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c6af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6af8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c6afc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c6b00: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C6B00u;
    SET_GPR_U32(ctx, 31, 0x4C6B08u);
    ctx->pc = 0x4C6B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6B00u;
    // 0x4c6b04: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C6B00u, 0x4C6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6B08u;
label_4c6b08:
    // 0x4c6b08: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4c6b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c6b0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c6b10: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c6b14: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4c6b14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6b18: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c6b18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c6b1c: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4c6b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c6b20: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4c6b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c6b24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6b28: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4c6b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4c6b2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6b30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c6b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c6b34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c6b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c6b38: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C6B38u;
    SET_GPR_U32(ctx, 31, 0x4C6B40u);
    ctx->pc = 0x4C6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6B38u;
    // 0x4c6b3c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C6B38u, 0x4C6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6B40u;
label_4c6b40:
    // 0x4c6b40: 0x521824  and         $v1, $v0, $s2
    ctx->pc = 0x4c6b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c6b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c6b48: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4c6b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4c6b4c: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4c6b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6b50: 0x8664013a  lh          $a0, 0x13A($s3)
    ctx->pc = 0x4c6b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 314)));
    // 0x4c6b54: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4c6b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c6b58: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4c6b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4c6b5c: 0xa6630028  sh          $v1, 0x28($s3)
    ctx->pc = 0x4c6b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c6b60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4c6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c6b64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c6b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c6b68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c6b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c6b6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c6b70: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C6B70u;
    SET_GPR_U32(ctx, 31, 0x4C6B78u);
    ctx->pc = 0x4C6B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6B70u;
    // 0x4c6b74: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C6B70u, 0x4C6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6B78u;
label_4c6b78:
    // 0x4c6b78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c6b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6b7c: 0x529024  and         $s2, $v0, $s2
    ctx->pc = 0x4c6b7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c6b80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c6b84: 0x129402  srl         $s2, $s2, 16
    ctx->pc = 0x4c6b84u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4c6b88: 0xa672002a  sh          $s2, 0x2A($s3)
    ctx->pc = 0x4c6b88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 18));
    // 0x4c6b8c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c6b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c6b90: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4C6B90u;
    SET_GPR_U32(ctx, 31, 0x4C6B98u);
    ctx->pc = 0x4C6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6B90u;
    // 0x4c6b94: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4C6B90u, 0x4C6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C6B98u;
label_4c6b98:
    // 0x4c6b98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c6b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6b9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4C6B9Cu;
    {
        const bool branch_taken_0x4c6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6B9Cu;
        // 0x4c6ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6b9c) {
            ctx->pc = 0x4C6BC8u;
            goto label_4c6bc8;
        }
    }
    ctx->pc = 0x4C6BA4u;
    // 0x4c6ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6bb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6bb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c6bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6bb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c6bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c6bbc: 0x8126ee2  j           func_49BB88
    ctx->pc = 0x4C6BBCu;
    ctx->pc = 0x4C6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C6BBCu;
    // 0x4c6bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    sub_0049BB88_0x49bb88(rdram, ctx, runtime); return;
    ctx->pc = 0x4C6BC4u;
    // 0x4c6bc4: 0x0  nop
    ctx->pc = 0x4c6bc4u;
    // NOP
label_4c6bc8:
    // 0x4c6bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c6bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c6bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c6bd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c6bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6bd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c6bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c6bd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c6bd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c6bdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4c6bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c6be0: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C6BE0u;
        // 0x4c6be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C6BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C6BE8u;
}
