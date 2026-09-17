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

// Function: sub_0050CE38
// Address: 0x50ce38 - 0x50d028
void sub_0050CE38_0x50ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050CE38_0x50ce38");
#endif

    switch (ctx->pc) {
        case 0x50cea4u: goto label_50cea4;
        case 0x50ceb8u: goto label_50ceb8;
        case 0x50cec8u: goto label_50cec8;
        case 0x50ceecu: goto label_50ceec;
        default: break;
    }

    ctx->pc = 0x50ce38u;

    // 0x50ce38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ce38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ce3c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x50ce40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50ce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50ce44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x50ce44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ce48: 0x24c6c658  addiu       $a2, $a2, -0x39A8
    ctx->pc = 0x50ce48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952536));
    // 0x50ce4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50ce50: 0x850500e0  lh          $a1, 0xE0($t0)
    ctx->pc = 0x50ce50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x50ce54: 0x250700fa  addiu       $a3, $t0, 0xFA
    ctx->pc = 0x50ce54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 250));
    // 0x50ce58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC658u));
    // 0x50ce5c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x50ce5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x50ce60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ce60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ce64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x50ce64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x50ce68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50ce6c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50ce6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50ce70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50ce74: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x50ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ce78: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x50CE78u;
    {
        const bool branch_taken_0x50ce78 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CE78u;
        // 0x50ce7c: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ce78) {
            ctx->pc = 0x50CE90u;
            goto label_50ce90;
        }
    }
    ctx->pc = 0x50CE80u;
    // 0x50ce80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50ce80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ce84: 0x8144af2  j           func_512BC8
    ctx->pc = 0x50CE84u;
    ctx->pc = 0x50CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CE84u;
    // 0x50ce88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    sub_00512BC8_0x512bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x50CE8Cu;
    // 0x50ce8c: 0x0  nop
    ctx->pc = 0x50ce8cu;
    // NOP
label_50ce90:
    // 0x50ce90: 0x850200f8  lh          $v0, 0xF8($t0)
    ctx->pc = 0x50ce90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 248)));
    // 0x50ce94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x50CE94u;
    {
        const bool branch_taken_0x50ce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ce94) {
            ctx->pc = 0x50CEB0u;
            goto label_50ceb0;
        }
    }
    ctx->pc = 0x50CE9Cu;
    // 0x50ce9c: 0xc1432d8  jal         func_50CB60
    ctx->pc = 0x50CE9Cu;
    SET_GPR_U32(ctx, 31, 0x50CEA4u);
    ctx->pc = 0x50CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CB60u, 0x50CE9Cu, 0x50CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CEA4u;
label_50cea4:
    // 0x50cea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x50CEA4u;
    {
        const bool branch_taken_0x50cea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CEA4u;
        // 0x50cea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cea4) {
            ctx->pc = 0x50CEBCu;
            goto label_50cebc;
        }
    }
    ctx->pc = 0x50CEACu;
    // 0x50ceac: 0x0  nop
    ctx->pc = 0x50ceacu;
    // NOP
label_50ceb0:
    // 0x50ceb0: 0xc143314  jal         func_50CC50
    ctx->pc = 0x50CEB0u;
    SET_GPR_U32(ctx, 31, 0x50CEB8u);
    ctx->pc = 0x50CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50CC50u, 0x50CEB0u, 0x50CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CEB8u;
label_50ceb8:
    // 0x50ceb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50ceb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50cebc:
    // 0x50cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x50CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CEBCu;
        // 0x50cec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50CEC4u;
    // 0x50cec4: 0x0  nop
    ctx->pc = 0x50cec4u;
    // NOP
label_50cec8:
    // 0x50cec8: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x50cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x50cecc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ceccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ced0: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x50ced0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x50ced4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50ced8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x50ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50cedc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x50cedcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x50cee0: 0x26101680  addiu       $s0, $s0, 0x1680
    ctx->pc = 0x50cee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5760));
    // 0x50cee4: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x50CEE4u;
    SET_GPR_U32(ctx, 31, 0x50CEECu);
    ctx->pc = 0x50CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50CEE4u;
    // 0x50cee8: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x50CEE4u, 0x50CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50CEECu;
label_50ceec:
    // 0x50ceec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50cef0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x50cef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50cef4: 0x24a700e4  addiu       $a3, $a1, 0xE4
    ctx->pc = 0x50cef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 228));
    // 0x50cef8: 0x24a800e8  addiu       $t0, $a1, 0xE8
    ctx->pc = 0x50cef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 232));
    // 0x50cefc: 0x24a400f0  addiu       $a0, $a1, 0xF0
    ctx->pc = 0x50cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x50cf00: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x50CF00u;
    {
        const bool branch_taken_0x50cf00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x50CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50CF00u;
        // 0x50cf04: 0x24a900f4  addiu       $t1, $a1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50cf00) {
            ctx->pc = 0x50D014u;
            goto label_50d014;
        }
    }
    ctx->pc = 0x50CF08u;
    // 0x50cf08: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x50cf0c: 0xa4a20008  sh          $v0, 0x8($a1)
    ctx->pc = 0x50cf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50cf10: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50cf10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf14: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf18: 0xa4a300e0  sh          $v1, 0xE0($a1)
    ctx->pc = 0x50cf18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x50cf1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50cf1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf20: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf24: 0xa4a200f8  sh          $v0, 0xF8($a1)
    ctx->pc = 0x50cf24u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 248), (uint16_t)GPR_U32(ctx, 2));
    // 0x50cf28: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50cf28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf2c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50cf34: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50cf38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cf3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50cf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50cf40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cf44: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50cf48: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50cf48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf4c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x50cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50cf54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50cf58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cf5c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50cf60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cf64: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x50cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x50cf68: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50cf68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf6c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf70: 0xa4a300ec  sh          $v1, 0xEC($a1)
    ctx->pc = 0x50cf70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 236), (uint16_t)GPR_U32(ctx, 3));
    // 0x50cf74: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50cf74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf78: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf7c: 0xa4a200ee  sh          $v0, 0xEE($a1)
    ctx->pc = 0x50cf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 238), (uint16_t)GPR_U32(ctx, 2));
    // 0x50cf80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50cf80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cf84: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cf88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50cf8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50cf90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cf94: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50cf98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cf9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50cfa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cfa4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x50cfa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cfa8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cfa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cfac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50cfb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50cfb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50cfb8: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50cfb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cfbc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50cfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50cfc0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x50cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50cfc4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50cfc8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50cfc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50cfcc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50cfd0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50cfd4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x50cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x50cfd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50cfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50cfdc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50cfdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50cfe0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50cfe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50cfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50cfe8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x50cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x50cfec: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x50cfecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50cff0: 0xa4a400fa  sh          $a0, 0xFA($a1)
    ctx->pc = 0x50cff0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 250), (uint16_t)GPR_U32(ctx, 4));
    // 0x50cff4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50cff8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50cffc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x50cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x50d000: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50d000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50d004: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50d004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50d008: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50d008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50d00c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x50d00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x50d010: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50d010u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_50d014:
    // 0x50d014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50d014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50d018: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x50d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x50D01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D01Cu;
        // 0x50d020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D024u;
    // 0x50d024: 0x0  nop
    ctx->pc = 0x50d024u;
    // NOP
    ctx->pc = 0x50d028u;
}
