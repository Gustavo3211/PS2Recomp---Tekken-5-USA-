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

// Function: sub_004B8B70
// Address: 0x4b8b70 - 0x4b9020
void sub_004B8B70_0x4b8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8B70_0x4b8b70");
#endif

    switch (ctx->pc) {
        case 0x4b8b90u: goto label_4b8b90;
        case 0x4b8bacu: goto label_4b8bac;
        case 0x4b8bc8u: goto label_4b8bc8;
        case 0x4b8c90u: goto label_4b8c90;
        case 0x4b8cb0u: goto label_4b8cb0;
        case 0x4b8d10u: goto label_4b8d10;
        case 0x4b8ea0u: goto label_4b8ea0;
        case 0x4b8ea8u: goto label_4b8ea8;
        case 0x4b8ebcu: goto label_4b8ebc;
        case 0x4b8ee8u: goto label_4b8ee8;
        case 0x4b8ef0u: goto label_4b8ef0;
        case 0x4b8ef8u: goto label_4b8ef8;
        case 0x4b8f00u: goto label_4b8f00;
        case 0x4b8f10u: goto label_4b8f10;
        case 0x4b8f2cu: goto label_4b8f2c;
        case 0x4b8f34u: goto label_4b8f34;
        case 0x4b8f58u: goto label_4b8f58;
        case 0x4b8f84u: goto label_4b8f84;
        case 0x4b8fb8u: goto label_4b8fb8;
        case 0x4b9000u: goto label_4b9000;
        default: break;
    }

    ctx->pc = 0x4b8b70u;

    // 0x4b8b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8b78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b8b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b8b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b8b84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4b8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4b8b88: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4B8B88u;
    SET_GPR_U32(ctx, 31, 0x4B8B90u);
    ctx->pc = 0x4B8B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B88u;
    // 0x4b8b8c: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B8B88u, 0x4B8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B90u;
label_4b8b90:
    // 0x4b8b90: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b8b94: 0xac620d94  sw          $v0, 0xD94($v1)
    ctx->pc = 0x4b8b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0D94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0D94u, _value); } while (0);
    // 0x4b8b98: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b8b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8b9c: 0x4420045  bltzl       $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x4B8B9Cu;
    {
        const bool branch_taken_0x4b8b9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b8b9c) {
            ctx->pc = 0x4B8BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8B9Cu;
            // 0x4b8ba0: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8CB4u;
            goto label_4b8cb4;
        }
    }
    ctx->pc = 0x4B8BA4u;
    // 0x4b8ba4: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B8BA4u;
    SET_GPR_U32(ctx, 31, 0x4B8BACu);
    ctx->pc = 0x4B8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8BA4u;
    // 0x4b8ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B8BA4u, 0x4B8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8BACu;
label_4b8bac:
    // 0x4b8bac: 0x2402048f  addiu       $v0, $zero, 0x48F
    ctx->pc = 0x4b8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1167));
    // 0x4b8bb0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4b8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4b8bb4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x4b8bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8bb8: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4b8bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8bbc: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4b8bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b8bc0: 0xc129368  jal         func_4A4DA0
    ctx->pc = 0x4B8BC0u;
    SET_GPR_U32(ctx, 31, 0x4B8BC8u);
    ctx->pc = 0x4B8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8BC0u;
    // 0x4b8bc4: 0xa6000168  sh          $zero, 0x168($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DA0u, 0x4B8BC0u, 0x4B8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8BC8u;
label_4b8bc8:
    // 0x4b8bc8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b8bcc: 0x2472d680  addiu       $s2, $v1, -0x2980
    ctx->pc = 0x4b8bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4b8bd0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4b8bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4b8bd4: 0x86430036  lh          $v1, 0x36($s2)
    ctx->pc = 0x4b8bd4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6B6u));
    // 0x4b8bd8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b8bdc: 0x86440038  lh          $a0, 0x38($s2)
    ctx->pc = 0x4b8bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D6B8u));
    // 0x4b8be0: 0x24a70d80  addiu       $a3, $a1, 0xD80
    ctx->pc = 0x4b8be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3456));
    // 0x4b8be4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b8be8: 0x860501be  lh          $a1, 0x1BE($s0)
    ctx->pc = 0x4b8be8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4b8bec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b8becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8bf0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4b8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4b8bf4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b8bf8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b8bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8bfc: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b8bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b8c00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b8c04: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4b8c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b8c08: 0xa6060158  sh          $a2, 0x158($s0)
    ctx->pc = 0x4b8c08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b8c0c: 0xa603015c  sh          $v1, 0x15C($s0)
    ctx->pc = 0x4b8c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8c10: 0xa603015a  sh          $v1, 0x15A($s0)
    ctx->pc = 0x4b8c10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8c14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b8c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8c1c: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x4b8c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b8c20: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b8c24: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b8c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b8c28: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B8C28u;
    {
        const bool branch_taken_0x4b8c28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C28u;
        // 0x4b8c2c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c28) {
            ctx->pc = 0x4B8C70u;
            goto label_4b8c70;
        }
    }
    ctx->pc = 0x4B8C30u;
    // 0x4b8c30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8c34: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b8c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b8c38: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x4b8c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4b8c3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8c40: 0x2606011c  addiu       $a2, $s0, 0x11C
    ctx->pc = 0x4b8c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
    // 0x4b8c44: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b8c48: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b8c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b8c4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b8c50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4b8c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4b8c54: 0x24216e90  addiu       $at, $at, 0x6E90
    ctx->pc = 0x4b8c54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28304));
    // 0x4b8c58: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4b8c5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b8c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b8c60: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4b8c60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8c64: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4b8c64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4b8c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8C68u;
    {
        const bool branch_taken_0x4b8c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C68u;
        // 0x4b8c6c: 0xa4c40000  sh          $a0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c68) {
            ctx->pc = 0x4B8C78u;
            goto label_4b8c78;
        }
    }
    ctx->pc = 0x4B8C70u;
label_4b8c70:
    // 0x4b8c70: 0x26050118  addiu       $a1, $s0, 0x118
    ctx->pc = 0x4b8c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x4b8c74: 0x2606011c  addiu       $a2, $s0, 0x11C
    ctx->pc = 0x4b8c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
label_4b8c78:
    // 0x4b8c78: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b8c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b8c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8c80: 0xa64324a0  sh          $v1, 0x24A0($s2)
    ctx->pc = 0x4b8c80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8c84: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b8c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b8c88: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B8C88u;
    SET_GPR_U32(ctx, 31, 0x4B8C90u);
    ctx->pc = 0x4B8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8C88u;
    // 0x4b8c8c: 0xa64224a2  sh          $v0, 0x24A2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B8C88u, 0x4B8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8C90u;
label_4b8c90:
    // 0x4b8c90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b8c94: 0xa60301b6  sh          $v1, 0x1B6($s0)
    ctx->pc = 0x4b8c94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8c98: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4b8c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4b8c9c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b8c9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8ca0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b8ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b8ca4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b8ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8ca8: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B8CA8u;
    SET_GPR_U32(ctx, 31, 0x4B8CB0u);
    ctx->pc = 0x4B8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8CA8u;
    // 0x4b8cac: 0xa64423c4  sh          $a0, 0x23C4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9156), (uint16_t)GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B8CA8u, 0x4B8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8CB0u;
label_4b8cb0:
    // 0x4b8cb0: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4b8cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4b8cb4:
    // 0x4b8cb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B8CB4u;
    {
        const bool branch_taken_0x4b8cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CB4u;
        // 0x4b8cb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cb4) {
            ctx->pc = 0x4B8CD8u;
            goto label_4b8cd8;
        }
    }
    ctx->pc = 0x4B8CBCu;
    // 0x4b8cbc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B8CBCu;
    {
        const bool branch_taken_0x4b8cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CBCu;
        // 0x4b8cc0: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cbc) {
            ctx->pc = 0x4B8CF8u;
            goto label_4b8cf8;
        }
    }
    ctx->pc = 0x4B8CC4u;
    // 0x4b8cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8ccc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4b8cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CD0u;
        // 0x4b8cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8CD8u;
label_4b8cd8:
    // 0x4b8cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8ce4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8ce8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4b8ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8cec: 0x812e262  j           func_4B8988
    ctx->pc = 0x4B8CECu;
    ctx->pc = 0x4B8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8CECu;
    // 0x4b8cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8988u, 0x4B8CECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B8CF4u;
    // 0x4b8cf4: 0x0  nop
    ctx->pc = 0x4b8cf4u;
    // NOP
label_4b8cf8:
    // 0x4b8cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4b8d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8d08: 0x812e136  j           func_4B84D8
    ctx->pc = 0x4B8D08u;
    ctx->pc = 0x4B8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8D08u;
    // 0x4b8d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B84D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B84D8u, 0x4B8D08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B8D10u;
label_4b8d10:
    // 0x4b8d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b8d14: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b8d14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8d1c: 0x258c0da4  addiu       $t4, $t4, 0xDA4
    ctx->pc = 0x4b8d1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3492));
    // 0x4b8d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b8d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8d24: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4b8d24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b8d2c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b8d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b8d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b8d34: 0x25080da8  addiu       $t0, $t0, 0xDA8
    ctx->pc = 0x4b8d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3496));
    // 0x4b8d38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b8d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b8d3c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b8d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b8d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b8d44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b8d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8d48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b8d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b8d4c: 0x26a3015e  addiu       $v1, $s5, 0x15E
    ctx->pc = 0x4b8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 350));
    // 0x4b8d50: 0x26b00010  addiu       $s0, $s5, 0x10
    ctx->pc = 0x4b8d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x4b8d54: 0x26af0014  addiu       $t7, $s5, 0x14
    ctx->pc = 0x4b8d54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x4b8d58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b8d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b8d5c: 0x26ae0018  addiu       $t6, $s5, 0x18
    ctx->pc = 0x4b8d5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x4b8d60: 0x24e70dac  addiu       $a3, $a3, 0xDAC
    ctx->pc = 0x4b8d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3500));
    // 0x4b8d64: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4b8d64u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b8d6c: 0x256b0d98  addiu       $t3, $t3, 0xD98
    ctx->pc = 0x4b8d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3480));
    // 0x4b8d70: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b8d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8d74: 0x26b40118  addiu       $s4, $s5, 0x118
    ctx->pc = 0x4b8d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 280));
    // 0x4b8d78: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4b8d78u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8d7c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b8d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d80: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b8d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8d84: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b8d84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b8d88: 0x254a0d9c  addiu       $t2, $t2, 0xD9C
    ctx->pc = 0x4b8d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3484));
    // 0x4b8d8c: 0x25290da0  addiu       $t1, $t1, 0xDA0
    ctx->pc = 0x4b8d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3488));
    // 0x4b8d90: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4b8d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0DA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DA4u, _value); } while (0);
    // 0x4b8d94: 0x26b3011c  addiu       $s3, $s5, 0x11C
    ctx->pc = 0x4b8d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
    // 0x4b8d98: 0x26b20120  addiu       $s2, $s5, 0x120
    ctx->pc = 0x4b8d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x4b8d9c: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4b8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b8da0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b8da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0DA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DA8u, _value); } while (0);
    // 0x4b8da4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4b8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b8da8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b8da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DACu, _value); } while (0);
    // 0x4b8dac: 0x8ea20124  lw          $v0, 0x124($s5)
    ctx->pc = 0x4b8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x4b8db0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b8db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b8db4: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4b8db4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0DA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DA4u, _value); } while (0);
    // 0x4b8db8: 0x8ea20128  lw          $v0, 0x128($s5)
    ctx->pc = 0x4b8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 296)));
    // 0x4b8dbc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b8dc0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b8dc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0DA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DA8u, _value); } while (0);
    // 0x4b8dc4: 0x8ea2012c  lw          $v0, 0x12C($s5)
    ctx->pc = 0x4b8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x4b8dc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8dcc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b8dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0DACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0DACu, _value); } while (0);
    // 0x4b8dd0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b8dd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0DA8u));
    // 0x4b8dd8: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4b8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4b8ddc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0DACu));
    // 0x4b8de0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4b8de0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4b8de4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D98u));
    // 0x4b8de8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b8de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b8dec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8df0: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4b8df0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D9Cu));
    // 0x4b8df4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4b8df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4b8df8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4b8df8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0DA0u));
    // 0x4b8dfc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8e00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8e04: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b8e08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8e0c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8e10: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b8e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b8e14: 0x8e2c0db4  lw          $t4, 0xDB4($s1)
    ctx->pc = 0x4b8e14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3508)));
    // 0x4b8e18: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4b8e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4b8e1c: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4b8e1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b8e20: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b8e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b8e24: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b8e28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8e2c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4b8e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b8e30: 0x85470000  lh          $a3, 0x0($t2)
    ctx->pc = 0x4b8e30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b8e34: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4b8e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4b8e38: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b8e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8e3c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b8e40: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8e44: 0x85820004  lh          $v0, 0x4($t4)
    ctx->pc = 0x4b8e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x4b8e48: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b8e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b8e4c: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x4b8e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x4b8e50: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4b8e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4b8e54: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b8e54u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b8e58: 0x85820006  lh          $v0, 0x6($t4)
    ctx->pc = 0x4b8e58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x4b8e5c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b8e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b8e60: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x4b8e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x4b8e64: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b8e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b8e68: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4b8e68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4b8e6c: 0x85830008  lh          $v1, 0x8($t4)
    ctx->pc = 0x4b8e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x4b8e70: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4b8e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b8e74: 0x95650000  lhu         $a1, 0x0($t3)
    ctx->pc = 0x4b8e74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b8e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b8e7c: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4b8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4b8e80: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b8e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8e84: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4b8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4b8e88: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x4b8e88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b8e8c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4b8e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b8e90: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4b8e90u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8e94: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4b8e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b8e98: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B8E98u;
    SET_GPR_U32(ctx, 31, 0x4B8EA0u);
    ctx->pc = 0x4B8E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8E98u;
    // 0x4b8e9c: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B8E98u, 0x4B8EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EA0u;
label_4b8ea0:
    // 0x4b8ea0: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B8EA0u;
    SET_GPR_U32(ctx, 31, 0x4B8EA8u);
    ctx->pc = 0x4B8EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EA0u;
    // 0x4b8ea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B8EA0u, 0x4B8EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EA8u;
label_4b8ea8:
    // 0x4b8ea8: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B8EA8u;
    {
        const bool branch_taken_0x4b8ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8ea8) {
            ctx->pc = 0x4B8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8EA8u;
            // 0x4b8eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8F38u;
            goto label_4b8f38;
        }
    }
    ctx->pc = 0x4B8EB0u;
    // 0x4b8eb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b8eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8eb4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B8EB4u;
    SET_GPR_U32(ctx, 31, 0x4B8EBCu);
    ctx->pc = 0x4B8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EB4u;
    // 0x4b8eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B8EB4u, 0x4B8EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EBCu;
label_4b8ebc:
    // 0x4b8ebc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b8ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8ec0: 0x14500011  bne         $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B8EC0u;
    {
        const bool branch_taken_0x4b8ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8EC0u;
        // 0x4b8ec4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ec0) {
            ctx->pc = 0x4B8F08u;
            goto label_4b8f08;
        }
    }
    ctx->pc = 0x4B8EC8u;
    // 0x4b8ec8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b8ecc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4b8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4b8ed0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b8ed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b8ed8: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4b8ed8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FA44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FA44u, _value); } while (0);
    // 0x4b8edc: 0xa445232e  sh          $a1, 0x232E($v0)
    ctx->pc = 0x4b8edcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9AEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9AEu, _value); } while (0);
    // 0x4b8ee0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B8EE0u;
    SET_GPR_U32(ctx, 31, 0x4B8EE8u);
    ctx->pc = 0x4B8EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EE0u;
    // 0x4b8ee4: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B8EE0u, 0x4B8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EE8u;
label_4b8ee8:
    // 0x4b8ee8: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B8EE8u;
    SET_GPR_U32(ctx, 31, 0x4B8EF0u);
    ctx->pc = 0x4B8EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EE8u;
    // 0x4b8eec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B8EE8u, 0x4B8EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EF0u;
label_4b8ef0:
    // 0x4b8ef0: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B8EF0u;
    SET_GPR_U32(ctx, 31, 0x4B8EF8u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B8EF0u, 0x4B8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8EF8u;
label_4b8ef8:
    // 0x4b8ef8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B8EF8u;
    SET_GPR_U32(ctx, 31, 0x4B8F00u);
    ctx->pc = 0x4B8EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8EF8u;
    // 0x4b8efc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B8EF8u, 0x4B8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F00u;
label_4b8f00:
    // 0x4b8f00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B8F00u;
    {
        const bool branch_taken_0x4b8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F00u;
        // 0x4b8f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8f00) {
            ctx->pc = 0x4B8F38u;
            goto label_4b8f38;
        }
    }
    ctx->pc = 0x4B8F08u;
label_4b8f08:
    // 0x4b8f08: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B8F08u;
    SET_GPR_U32(ctx, 31, 0x4B8F10u);
    ctx->pc = 0x4B8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F08u;
    // 0x4b8f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B8F08u, 0x4B8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F10u;
label_4b8f10:
    // 0x4b8f10: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B8F10u;
    {
        const bool branch_taken_0x4b8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b8f10) {
            ctx->pc = 0x4B8F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8F10u;
            // 0x4b8f14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8F38u;
            goto label_4b8f38;
        }
    }
    ctx->pc = 0x4B8F18u;
    // 0x4b8f18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b8f1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4b8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4b8f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b8f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f24: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B8F24u;
    SET_GPR_U32(ctx, 31, 0x4B8F2Cu);
    ctx->pc = 0x4B8F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F24u;
    // 0x4b8f28: 0xa462f9ae  sh          $v0, -0x652($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965678), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B8F24u, 0x4B8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F2Cu;
label_4b8f2c:
    // 0x4b8f2c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B8F2Cu;
    SET_GPR_U32(ctx, 31, 0x4B8F34u);
    ctx->pc = 0x4B8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F2Cu;
    // 0x4b8f30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B8F2Cu, 0x4B8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F34u;
label_4b8f34:
    // 0x4b8f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8f38:
    // 0x4b8f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b8f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b8f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8f44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b8f44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8f48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b8f48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b8f4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b8f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8f50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F50u;
        // 0x4b8f54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8F58u;
label_4b8f58:
    // 0x4b8f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b8f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b8f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8f60: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b8f60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b8f64: 0x26100d98  addiu       $s0, $s0, 0xD98
    ctx->pc = 0x4b8f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3480));
    // 0x4b8f68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8f6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b8f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b8f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b8f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b8f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b8f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b8f7c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4B8F7Cu;
    SET_GPR_U32(ctx, 31, 0x4B8F84u);
    ctx->pc = 0x4B8F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F7Cu;
    // 0x4b8f80: 0x3c13ffff  lui         $s3, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B8F7Cu, 0x4B8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F84u;
label_4b8f84:
    // 0x4b8f84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8f88: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8f8c: 0x26510160  addiu       $s1, $s2, 0x160
    ctx->pc = 0x4b8f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x4b8f90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4b8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b8f94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8f98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8f9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b8fa0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4b8fa0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8fa4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b8fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8fa8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b8fac: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b8facu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8fb0: 0xc13e3fc  jal         func_4F8FF0
    ctx->pc = 0x4B8FB0u;
    SET_GPR_U32(ctx, 31, 0x4B8FB8u);
    ctx->pc = 0x4B8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8FB0u;
    // 0x4b8fb4: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FF0u, 0x4B8FB0u, 0x4B8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8FB8u;
label_4b8fb8:
    // 0x4b8fb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8fbc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8fc0: 0x26460162  addiu       $a2, $s2, 0x162
    ctx->pc = 0x4b8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
    // 0x4b8fc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8fc8: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4b8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4b8fcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8fd0: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4b8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4b8fd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b8fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b8fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b8fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8fdc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4b8fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8fe0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b8fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b8fe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b8fe8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4b8fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8fec: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4b8fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b8ff0: 0xa4a324a0  sh          $v1, 0x24A0($a1)
    ctx->pc = 0x4b8ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8ff4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b8ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b8ff8: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4B8FF8u;
    SET_GPR_U32(ctx, 31, 0x4B9000u);
    ctx->pc = 0x4B8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8FF8u;
    // 0x4b8ffc: 0xa4a224a2  sh          $v0, 0x24A2($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9378), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4B8FF8u, 0x4B9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9000u;
label_4b9000:
    // 0x4b9000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b9004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b9008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b9008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b900c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b900cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b9010: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b9010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b9014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b9014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9018: 0x812e344  j           func_4B8D10
    ctx->pc = 0x4B9018u;
    ctx->pc = 0x4B901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9018u;
    // 0x4b901c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D10u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4b8d10;
    ctx->pc = 0x4B9020u;
}
