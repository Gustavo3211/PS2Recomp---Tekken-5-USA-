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

// Function: sub_004C99F8
// Address: 0x4c99f8 - 0x4c9bf8
void sub_004C99F8_0x4c99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C99F8_0x4c99f8");
#endif

    switch (ctx->pc) {
        case 0x4c9a24u: goto label_4c9a24;
        case 0x4c9bc0u: goto label_4c9bc0;
        case 0x4c9bd0u: goto label_4c9bd0;
        case 0x4c9be0u: goto label_4c9be0;
        case 0x4c9bf0u: goto label_4c9bf0;
        default: break;
    }

    ctx->pc = 0x4c99f8u;

    // 0x4c99f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c99f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c99fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c9a00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c9a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c9a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c9a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c9a0c: 0x263001b4  addiu       $s0, $s1, 0x1B4
    ctx->pc = 0x4c9a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4c9a10: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4c9a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c9a14: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C9A14u;
    {
        const bool branch_taken_0x4c9a14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9a14) {
            ctx->pc = 0x4C9A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9A14u;
            // 0x4c9a18: 0x8e240140  lw          $a0, 0x140($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9A44u;
            goto label_4c9a44;
        }
    }
    ctx->pc = 0x4C9A1Cu;
    // 0x4c9a1c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4C9A1Cu;
    SET_GPR_U32(ctx, 31, 0x4C9A24u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4C9A1Cu, 0x4C9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9A24u;
label_4c9a24:
    // 0x4c9a24: 0xa620015e  sh          $zero, 0x15E($s1)
    ctx->pc = 0x4c9a24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c9a28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c9a2c: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x4c9a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c9a30: 0xa62301b6  sh          $v1, 0x1B6($s1)
    ctx->pc = 0x4c9a30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9a34: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c9a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c9a38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4c9a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4c9a3c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4c9a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9a40: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x4c9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_4c9a44:
    // 0x4c9a44: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c9a48: 0xac440f58  sw          $a0, 0xF58($v0)
    ctx->pc = 0x4c9a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F58u, _value); } while (0);
    // 0x4c9a4c: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4c9a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4c9a50: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C9A50u;
    {
        const bool branch_taken_0x4c9a50 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4C9A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A50u;
        // 0x4c9a54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9a50) {
            ctx->pc = 0x4C9A70u;
            goto label_4c9a70;
        }
    }
    ctx->pc = 0x4C9A58u;
    // 0x4c9a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9a64: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C9A64u;
    ctx->pc = 0x4C9A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9A64u;
    // 0x4c9a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C9A6Cu;
    // 0x4c9a6c: 0x0  nop
    ctx->pc = 0x4c9a6cu;
    // NOP
label_4c9a70:
    // 0x4c9a70: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4c9a70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4c9a74: 0x24860160  addiu       $a2, $a0, 0x160
    ctx->pc = 0x4c9a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x4c9a78: 0x25050f50  addiu       $a1, $t0, 0xF50
    ctx->pc = 0x4c9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3920));
    // 0x4c9a7c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4c9a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9a80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F50u));
    // 0x4c9a84: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4c9a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9a88: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9a8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9a94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9a98: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c9a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9a9c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C9A9Cu;
    {
        const bool branch_taken_0x4c9a9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9A9Cu;
        // 0x4c9aa0: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9a9c) {
            ctx->pc = 0x4C9AC0u;
            goto label_4c9ac0;
        }
    }
    ctx->pc = 0x4C9AA4u;
    // 0x4c9aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c9aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9ab4: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4C9AB4u;
    ctx->pc = 0x4C9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9AB4u;
    // 0x4c9ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4C9ABCu;
    // 0x4c9abc: 0x0  nop
    ctx->pc = 0x4c9abcu;
    // NOP
label_4c9ac0:
    // 0x4c9ac0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4c9ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4c9ac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9ac8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9acc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9ad0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9ad4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c9ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9ad8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4C9AD8u;
    {
        const bool branch_taken_0x4c9ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c9ad8) {
            ctx->pc = 0x4C9ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9AD8u;
            // 0x4c9adc: 0x862201be  lh          $v0, 0x1BE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9AF8u;
            goto label_4c9af8;
        }
    }
    ctx->pc = 0x4C9AE0u;
    // 0x4c9ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c9ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c9ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c9ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9af0: 0x813271a  j           func_4C9C68
    ctx->pc = 0x4C9AF0u;
    ctx->pc = 0x4C9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9AF0u;
    // 0x4c9af4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C68u, 0x4C9AF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4C9AF8u;
label_4c9af8:
    // 0x4c9af8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4C9AF8u;
    {
        const bool branch_taken_0x4c9af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9AF8u;
        // 0x4c9afc: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9af8) {
            ctx->pc = 0x4C9B38u;
            goto label_4c9b38;
        }
    }
    ctx->pc = 0x4C9B00u;
    // 0x4c9b00: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x4c9b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x4c9b04: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c9b04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9b08: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4c9b08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b10: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x4c9b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x4c9b14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9b18: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4c9b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4c9b1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c9b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c9b20: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9b24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9b28: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c9b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4C9B2Cu;
    {
        const bool branch_taken_0x4c9b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9B2Cu;
        // 0x4c9b30: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9b2c) {
            ctx->pc = 0x4C9B84u;
            goto label_4c9b84;
        }
    }
    ctx->pc = 0x4C9B34u;
    // 0x4c9b34: 0x0  nop
    ctx->pc = 0x4c9b34u;
    // NOP
label_4c9b38:
    // 0x4c9b38: 0x3042ff0f  andi        $v0, $v0, 0xFF0F
    ctx->pc = 0x4c9b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65295);
    // 0x4c9b3c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4c9b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9b40: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4c9b40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b48: 0x30840070  andi        $a0, $a0, 0x70
    ctx->pc = 0x4c9b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
    // 0x4c9b4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9b50: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4c9b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4c9b54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c9b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c9b58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9b5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9b60: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c9b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9b68: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x4c9b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x4c9b6c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9b74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9b7c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4c9b7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9b80: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4c9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
label_4c9b84:
    // 0x4c9b84: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4c9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4c9b88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9b8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9b90: 0x85030f50  lh          $v1, 0xF50($t0)
    ctx->pc = 0x4c9b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 3920)));
    // 0x4c9b94: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x4c9b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4c9b98: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C9B98u;
    {
        const bool branch_taken_0x4c9b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9B98u;
        // 0x4c9b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9b98) {
            ctx->pc = 0x4C9C04u;
            return;
        }
    }
    ctx->pc = 0x4C9BA0u;
    // 0x4c9ba0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c9ba4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4c9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4c9ba8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c9ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4c9bac: 0x8c63b5b0  lw          $v1, -0x4A50($v1)
    ctx->pc = 0x4c9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948272)));
    // 0x4c9bb0: 0x600008  jr          $v1
    ctx->pc = 0x4C9BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4C9BB8u: goto label_4c9bb8;
            case 0x4C9BC8u: goto label_4c9bc8;
            case 0x4C9BD8u: goto label_4c9bd8;
            case 0x4C9BE8u: goto label_4c9be8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9BB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4C9BB8u;
label_4c9bb8:
    // 0x4c9bb8: 0xc132706  jal         func_4C9C18
    ctx->pc = 0x4C9BB8u;
    SET_GPR_U32(ctx, 31, 0x4C9BC0u);
    ctx->pc = 0x4C9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9BB8u;
    // 0x4c9bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C18u, 0x4C9BB8u, 0x4C9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9BC0u;
label_4c9bc0:
    // 0x4c9bc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4C9BC0u;
    {
        const bool branch_taken_0x4c9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BC0u;
        // 0x4c9bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9bc0) {
            ctx->pc = 0x4C9C04u;
            return;
        }
    }
    ctx->pc = 0x4C9BC8u;
label_4c9bc8:
    // 0x4c9bc8: 0xc13270e  jal         func_4C9C38
    ctx->pc = 0x4C9BC8u;
    SET_GPR_U32(ctx, 31, 0x4C9BD0u);
    ctx->pc = 0x4C9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9BC8u;
    // 0x4c9bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C38u, 0x4C9BC8u, 0x4C9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9BD0u;
label_4c9bd0:
    // 0x4c9bd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4C9BD0u;
    {
        const bool branch_taken_0x4c9bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BD0u;
        // 0x4c9bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9bd0) {
            ctx->pc = 0x4C9C04u;
            return;
        }
    }
    ctx->pc = 0x4C9BD8u;
label_4c9bd8:
    // 0x4c9bd8: 0xc13270a  jal         func_4C9C28
    ctx->pc = 0x4C9BD8u;
    SET_GPR_U32(ctx, 31, 0x4C9BE0u);
    ctx->pc = 0x4C9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9BD8u;
    // 0x4c9bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C28u, 0x4C9BD8u, 0x4C9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9BE0u;
label_4c9be0:
    // 0x4c9be0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C9BE0u;
    {
        const bool branch_taken_0x4c9be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BE0u;
        // 0x4c9be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9be0) {
            ctx->pc = 0x4C9C04u;
            return;
        }
    }
    ctx->pc = 0x4C9BE8u;
label_4c9be8:
    // 0x4c9be8: 0xc132718  jal         func_4C9C60
    ctx->pc = 0x4C9BE8u;
    SET_GPR_U32(ctx, 31, 0x4C9BF0u);
    ctx->pc = 0x4C9BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9BE8u;
    // 0x4c9bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C9C60u, 0x4C9BE8u, 0x4C9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9BF0u;
label_4c9bf0:
    // 0x4c9bf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C9BF0u;
    {
        const bool branch_taken_0x4c9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9BF0u;
        // 0x4c9bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9bf0) {
            ctx->pc = 0x4C9C04u;
            return;
        }
    }
    ctx->pc = 0x4C9BF8u;
}
