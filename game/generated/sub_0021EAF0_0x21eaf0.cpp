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

// Function: sub_0021EAF0
// Address: 0x21eaf0 - 0x21edc8
void sub_0021EAF0_0x21eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EAF0_0x21eaf0");
#endif

    switch (ctx->pc) {
        case 0x21eb44u: goto label_21eb44;
        case 0x21eb8cu: goto label_21eb8c;
        case 0x21ebccu: goto label_21ebcc;
        case 0x21ec08u: goto label_21ec08;
        case 0x21ec44u: goto label_21ec44;
        case 0x21ec74u: goto label_21ec74;
        case 0x21eca8u: goto label_21eca8;
        case 0x21ece8u: goto label_21ece8;
        case 0x21ed94u: goto label_21ed94;
        case 0x21eda0u: goto label_21eda0;
        default: break;
    }

    ctx->pc = 0x21eaf0u;

    // 0x21eaf0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21eaf4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21eaf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21eafc: 0x3e00008  jr          $ra
    ctx->pc = 0x21EAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAFCu;
        // 0x21eb00: 0x8c42c0f8  lw          $v0, -0x3F08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EB04u;
    // 0x21eb04: 0x0  nop
    ctx->pc = 0x21eb04u;
    // NOP
    // 0x21eb08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21eb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21eb0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21eb10: 0x2790c940  addiu       $s0, $gp, -0x36C0
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953280));
    // 0x21eb14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21eb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21eb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21eb20: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x21eb20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x21eb24: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21eb28: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x21eb2c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21eb30: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21eb34: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21eb38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21eb3c: 0xc08fdf8  jal         func_23F7E0
    ctx->pc = 0x21EB3Cu;
    SET_GPR_U32(ctx, 31, 0x21EB44u);
    ctx->pc = 0x21EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB3Cu;
    // 0x21eb40: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F7E0u, 0x21EB3Cu, 0x21EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB44u;
label_21eb44:
    // 0x21eb44: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x21eb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21eb48: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x21eb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21eb4c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x21eb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb50: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x21eb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21eb54: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x21eb54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x21eb58: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x21eb58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x21eb5c: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x21eb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eb60: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x21eb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x21eb64: 0x93a40006  lbu         $a0, 0x6($sp)
    ctx->pc = 0x21eb64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x21eb68: 0x93a50007  lbu         $a1, 0x7($sp)
    ctx->pc = 0x21eb68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x21eb6c: 0x93a20005  lbu         $v0, 0x5($sp)
    ctx->pc = 0x21eb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x21eb70: 0xa2260002  sb          $a2, 0x2($s1)
    ctx->pc = 0x21eb70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x21eb74: 0xa6250006  sh          $a1, 0x6($s1)
    ctx->pc = 0x21eb74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x21eb78: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x21eb78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x21eb7c: 0xa2240005  sb          $a0, 0x5($s1)
    ctx->pc = 0x21eb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x21eb80: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x21eb80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x21eb84: 0xc093580  jal         func_24D600
    ctx->pc = 0x21EB84u;
    SET_GPR_U32(ctx, 31, 0x21EB8Cu);
    ctx->pc = 0x21EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB84u;
    // 0x21eb88: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21EB84u, 0x21EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB8Cu;
label_21eb8c:
    // 0x21eb8c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21eb8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21eb90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21eb94: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x21eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x21eb98: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x21eb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x21eb9c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21eb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21eba0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21eba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21eba4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21eba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21eba8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21eba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ebac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ebb0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ebb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ebb4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x21ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x21ebb8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x21ebb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x21ebbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ebc0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ebc4: 0xc093580  jal         func_24D600
    ctx->pc = 0x21EBC4u;
    SET_GPR_U32(ctx, 31, 0x21EBCCu);
    ctx->pc = 0x21EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBC4u;
    // 0x21ebc8: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21EBC4u, 0x21EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBCCu;
label_21ebcc:
    // 0x21ebcc: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ebccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ebd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ebd4: 0x2404c0ff  addiu       $a0, $zero, -0x3F01
    ctx->pc = 0x21ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294951167));
    // 0x21ebd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ebd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ebdc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ebdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ebe0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ebe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ebe4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ebe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ebe8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ebec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ebecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ebf0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x21ebf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x21ebf4: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x21ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x21ebf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ebf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ebfc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ec00: 0xc093580  jal         func_24D600
    ctx->pc = 0x21EC00u;
    SET_GPR_U32(ctx, 31, 0x21EC08u);
    ctx->pc = 0x21EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC00u;
    // 0x21ec04: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21EC00u, 0x21EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC08u;
label_21ec08:
    // 0x21ec08: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ec08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ec0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ec10: 0x2404ff07  addiu       $a0, $zero, -0xF9
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967047));
    // 0x21ec14: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ec18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ec18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ec1c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ec1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ec20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ec20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ec24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ec24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ec28: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ec28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ec2c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x21ec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x21ec30: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x21ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x21ec34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ec34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ec38: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ec3c: 0xc093580  jal         func_24D600
    ctx->pc = 0x21EC3Cu;
    SET_GPR_U32(ctx, 31, 0x21EC44u);
    ctx->pc = 0x21EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC3Cu;
    // 0x21ec40: 0x92240004  lbu         $a0, 0x4($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21EC3Cu, 0x21EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC44u;
label_21ec44:
    // 0x21ec44: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ec44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ec48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ec4c: 0x3c04f07f  lui         $a0, 0xF07F
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61567 << 16));
    // 0x21ec50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ec50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ec54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ec58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ec5c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x21ec60: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x21ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x21ec64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ec68: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ec68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ec6c: 0xc093580  jal         func_24D600
    ctx->pc = 0x21EC6Cu;
    SET_GPR_U32(ctx, 31, 0x21EC74u);
    ctx->pc = 0x21EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC6Cu;
    // 0x21ec70: 0x92240005  lbu         $a0, 0x5($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21EC6Cu, 0x21EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC74u;
label_21ec74:
    // 0x21ec74: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ec74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ec78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ec7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ec7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ec80: 0x34840fff  ori         $a0, $a0, 0xFFF
    ctx->pc = 0x21ec80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4095);
    // 0x21ec84: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ec84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ec88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ec88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ec8c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x21ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x21ec90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ec94: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x21ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x21ec98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ec98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ec9c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21eca0: 0xc093580  jal         func_24D600
    ctx->pc = 0x21ECA0u;
    SET_GPR_U32(ctx, 31, 0x21ECA8u);
    ctx->pc = 0x21ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECA0u;
    // 0x21eca4: 0x96240006  lhu         $a0, 0x6($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D600u, 0x21ECA0u, 0x21ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECA8u;
label_21eca8:
    // 0x21eca8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ecac: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x21ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x21ecb0: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x21ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x21ecb4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ecb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ecb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ecb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ecbc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ecbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ecc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ecc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ecc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ecc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ecc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21eccc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ecccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ecd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ecd4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x21ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x21ecd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ecdc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ece0: 0xc087aa8  jal         func_21EAA0
    ctx->pc = 0x21ECE0u;
    SET_GPR_U32(ctx, 31, 0x21ECE8u);
    ctx->pc = 0x21ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECE0u;
    // 0x21ece4: 0x92240011  lbu         $a0, 0x11($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EAA0u, 0x21ECE0u, 0x21ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECE8u;
label_21ece8:
    // 0x21ece8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21ece8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ecec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ecf0: 0x3c04ff8f  lui         $a0, 0xFF8F
    ctx->pc = 0x21ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65423 << 16));
    // 0x21ecf4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ecf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ecf8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x21ecfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ecfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ed00: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x21ed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x21ed04: 0x3c04fff7  lui         $a0, 0xFFF7
    ctx->pc = 0x21ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65527 << 16));
    // 0x21ed08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ed08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ed0c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x21ed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x21ed10: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x21ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x21ed14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ed14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ed18: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x21ed18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x21ed1c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ed20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x21ed24: 0x2407f01f  addiu       $a3, $zero, -0xFE1
    ctx->pc = 0x21ed24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963231));
    // 0x21ed28: 0x3c09fff8  lui         $t1, 0xFFF8
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65528 << 16));
    // 0x21ed2c: 0x35290fff  ori         $t1, $t1, 0xFFF
    ctx->pc = 0x21ed2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4095);
    // 0x21ed30: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x21ed30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21ed34: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x21ed34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed38: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x21ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21ed3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ed3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21ed40: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x21ed40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x21ed44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ed48: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ed4c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x21ed4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x21ed50: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x21ed50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x21ed54: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x21ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x21ed58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ed5c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ed60: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x21ed60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x21ed64: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x21ed64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x21ed68: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x21ed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x21ed6c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x21ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x21ed70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ed70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ed74: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x21ed78: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x21ed78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x21ed7c: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x21ed7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21ed80: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x21ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x21ed84: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x21ed84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x21ed88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21ed88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21ed8c: 0xc04a48c  jal         func_129230
    ctx->pc = 0x21ED8Cu;
    SET_GPR_U32(ctx, 31, 0x21ED94u);
    ctx->pc = 0x21ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED8Cu;
    // 0x21ed90: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x21ED8Cu, 0x21ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED94u;
label_21ed94:
    // 0x21ed94: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x21ed94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21ed98: 0xc087a6c  jal         func_21E9B0
    ctx->pc = 0x21ED98u;
    SET_GPR_U32(ctx, 31, 0x21EDA0u);
    ctx->pc = 0x21ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED98u;
    // 0x21ed9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E9B0u, 0x21ED98u, 0x21EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDA0u;
label_21eda0:
    // 0x21eda0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21eda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eda4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21eda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21eda8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21eda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21edac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21edacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21edb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21edb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21edb4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21edb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21edb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21edb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21edbc: 0x3e00008  jr          $ra
    ctx->pc = 0x21EDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDBCu;
        // 0x21edc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EDC4u;
    // 0x21edc4: 0x0  nop
    ctx->pc = 0x21edc4u;
    // NOP
    ctx->pc = 0x21edc8u;
}
