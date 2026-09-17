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

// Function: sub_004D1A58
// Address: 0x4d1a58 - 0x4d1ca0
void sub_004D1A58_0x4d1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1A58_0x4d1a58");
#endif

    switch (ctx->pc) {
        case 0x4d1b5cu: goto label_4d1b5c;
        default: break;
    }

    ctx->pc = 0x4d1a58u;

    // 0x4d1a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d1a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4d1a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d1a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d1a60: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d1a60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d1a68: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d1a68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4d1a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d1a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d1a70: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d1a70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d1a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d1a78: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d1a78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d1a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d1a80: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4d1a80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d1a88: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4d1a88u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a8c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d1a90: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4d1a90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1a94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4d1a98: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4d1a98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4d1a9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d1a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4d1aa0: 0x26f71008  addiu       $s7, $s7, 0x1008
    ctx->pc = 0x4d1aa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4104));
    // 0x4d1aa4: 0x26100ff8  addiu       $s0, $s0, 0xFF8
    ctx->pc = 0x4d1aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4088));
    // 0x4d1aa8: 0x26940ffc  addiu       $s4, $s4, 0xFFC
    ctx->pc = 0x4d1aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4092));
    // 0x4d1aac: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4d1aacu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1008u));
    // 0x4d1ab0: 0x26521000  addiu       $s2, $s2, 0x1000
    ctx->pc = 0x4d1ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4096));
    // 0x4d1ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4d1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FF8u));
    // 0x4d1ab8: 0x26b50fec  addiu       $s5, $s5, 0xFEC
    ctx->pc = 0x4d1ab8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4076));
    // 0x4d1abc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d1abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1ac0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4d1ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4d1ac4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4d1ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F1008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1008u, _value); } while (0);
    // 0x4d1ac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1acc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1ad0: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x4d1ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4d1ad4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d1ad8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4d1ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1adc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4d1ae0: 0x26730ff0  addiu       $s3, $s3, 0xFF0
    ctx->pc = 0x4d1ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4080));
    // 0x4d1ae4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1ae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d1ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d1ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1aec: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d1aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d1af0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d1af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d1af4: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4d1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x4d1af8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1afc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d1afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d1b00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d1b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1b04: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4d1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4d1b08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1b0c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d1b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d1b10: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4d1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4d1b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d1b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1b18: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1b1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d1b20: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d1b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d1b24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d1b28: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1b28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d1b2c: 0x86c20026  lh          $v0, 0x26($s6)
    ctx->pc = 0x4d1b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 38)));
    // 0x4d1b30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1b34: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1b38: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d1b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d1b3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d1b40: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x4d1b44: 0x86c20028  lh          $v0, 0x28($s6)
    ctx->pc = 0x4d1b44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x4d1b48: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1b4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d1b50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4d1b54: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D1B54u;
    SET_GPR_U32(ctx, 31, 0x4D1B5Cu);
    ctx->pc = 0x4D1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1B54u;
    // 0x4d1b58: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D1B54u, 0x4D1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1B5Cu;
label_4d1b5c:
    // 0x4d1b5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4d1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1b60: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x4d1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4d1b64: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4d1b64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4d1b68: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4d1b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1b6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d1b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4d1b70: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d1b74: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4d1b74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1b78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1b78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1b7c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4d1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1b80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d1b84: 0x864c0000  lh          $t4, 0x0($s2)
    ctx->pc = 0x4d1b84u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1b88: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d1b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d1b8c: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x4d1b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1b90: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d1b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4d1b94: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d1b98: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4d1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4d1b9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1ba0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4d1ba0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4d1ba4: 0x2508d680  addiu       $t0, $t0, -0x2980
    ctx->pc = 0x4d1ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956672));
    // 0x4d1ba8: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x4d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4d1bac: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x4d1bacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4d1bb0: 0x8eeb0000  lw          $t3, 0x0($s7)
    ctx->pc = 0x4d1bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4d1bb4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d1bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d1bb8: 0x960d0000  lhu         $t5, 0x0($s0)
    ctx->pc = 0x4d1bb8u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d1bbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1bbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1bc0: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x4d1bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d1bc4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4d1bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d1bc8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4d1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1bcc: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4d1bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4d1bd0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4d1bd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4d1bd4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4d1bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4d1bd8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d1bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d1bdc: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4d1bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4d1be0: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x4d1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4d1be4: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4d1be4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d1be8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4d1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d1bec: 0xa50d2334  sh          $t5, 0x2334($t0)
    ctx->pc = 0x4d1becu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9012), (uint16_t)GPR_U32(ctx, 13));
    // 0x4d1bf0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4d1bf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d1bf4: 0xa5032336  sh          $v1, 0x2336($t0)
    ctx->pc = 0x4d1bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d1bf8: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x4d1bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x4d1bfc: 0x1916025  or          $t4, $t4, $s1
    ctx->pc = 0x4d1bfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 17));
    // 0x4d1c00: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x4d1c00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x4d1c04: 0xae4a0000  sw          $t2, 0x0($s2)
    ctx->pc = 0x4d1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 10));
    // 0x4d1c08: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d1c08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1c0c: 0xa5022338  sh          $v0, 0x2338($t0)
    ctx->pc = 0x4d1c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d1c10: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4d1c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d1c14: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4d1c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4d1c18: 0xaeeb0000  sw          $t3, 0x0($s7)
    ctx->pc = 0x4d1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 11));
    // 0x4d1c1c: 0x25660002  addiu       $a2, $t3, 0x2
    ctx->pc = 0x4d1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4d1c20: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d1c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4d1c24: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4d1c24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4d1c28: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x4d1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x4d1c2c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4d1c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4d1c30: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4d1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4d1c34: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1c38: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d1c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d1c3c: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x4d1c3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d1c40: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4d1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4d1c44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4d1c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4d1c48: 0x86c30164  lh          $v1, 0x164($s6)
    ctx->pc = 0x4d1c48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 356)));
    // 0x4d1c4c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d1c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1c50: 0xa506233a  sh          $a2, 0x233A($t0)
    ctx->pc = 0x4d1c50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9018), (uint16_t)GPR_U32(ctx, 6));
    // 0x4d1c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d1c58: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4d1c5c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4d1c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4d1c60: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x4d1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x4d1c64: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d1c64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d1c68: 0xa502233c  sh          $v0, 0x233C($t0)
    ctx->pc = 0x4d1c68u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d1c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d1c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d1c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d1c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d1c78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d1c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d1c7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d1c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d1c80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d1c80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d1c84: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d1c84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d1c88: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d1c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d1c8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d1c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d1c90: 0xa50e2330  sh          $t6, 0x2330($t0)
    ctx->pc = 0x4d1c90u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9008), (uint16_t)GPR_U32(ctx, 14));
    // 0x4d1c94: 0xa500233e  sh          $zero, 0x233E($t0)
    ctx->pc = 0x4d1c94u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4d1c98: 0x8127a50  j           func_49E940
    ctx->pc = 0x4D1C98u;
    ctx->pc = 0x4D1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1C98u;
    // 0x4d1c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    sub_0049E940_0x49e940(rdram, ctx, runtime); return;
    ctx->pc = 0x4D1CA0u;
}
