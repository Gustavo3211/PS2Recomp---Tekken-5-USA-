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

// Function: sub_00508928
// Address: 0x508928 - 0x508f28
void sub_00508928_0x508928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00508928_0x508928");
#endif

    switch (ctx->pc) {
        case 0x5089d0u: goto label_5089d0;
        case 0x5089d8u: goto label_5089d8;
        case 0x508b20u: goto label_508b20;
        case 0x508bc8u: goto label_508bc8;
        case 0x508bd4u: goto label_508bd4;
        case 0x508c64u: goto label_508c64;
        case 0x508cf4u: goto label_508cf4;
        case 0x508dd0u: goto label_508dd0;
        case 0x508e9cu: goto label_508e9c;
        default: break;
    }

    ctx->pc = 0x508928u;

    // 0x508928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x508928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50892c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x50892cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x508930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x508930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x508934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x508934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x508938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x508938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50893c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x508940: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x508940u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x508944: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x508944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x508948: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x508948u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x50894c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x508950: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x508950u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x508954: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x508954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x508958: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x508958u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x50895c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x508960: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x508960u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x508964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x508964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x508968: 0x26c6c5d0  addiu       $a2, $s6, -0x3A30
    ctx->pc = 0x508968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952400));
    // 0x50896c: 0x26a8c5c0  addiu       $t0, $s5, -0x3A40
    ctx->pc = 0x50896cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952384));
    // 0x508970: 0x2689c5c4  addiu       $t1, $s4, -0x3A3C
    ctx->pc = 0x508970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952388));
    // 0x508974: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x508974u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC5D0u));
    // 0x508978: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x508978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50897c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50897cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5C0u));
    // 0x508980: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x508980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508984: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x508984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x508988: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x508988u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5D0u, _value); } while (0);
    // 0x50898c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50898cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508990: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x508990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x508994: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x508994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x508998: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50899c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x50899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5089a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x5089a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x5089a4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5089a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5089a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5089ac: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x5089acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x5089b0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x5089b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5089b4: 0x2471c5b0  addiu       $s1, $v1, -0x3A50
    ctx->pc = 0x5089b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952368));
    // 0x5089b8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x5089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x5089bc: 0x2510c5b4  addiu       $s0, $t0, -0x3A4C
    ctx->pc = 0x5089bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952372));
    // 0x5089c0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x5089c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x5089c4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5089c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x5089c8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x5089c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x5089cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x5089ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5089d0:
    // 0x5089d0: 0xc14481c  jal         func_512070
    ctx->pc = 0x5089D0u;
    SET_GPR_U32(ctx, 31, 0x5089D8u);
    ctx->pc = 0x5089D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5089D0u;
    // 0x5089d4: 0x26e4c5ac  addiu       $a0, $s7, -0x3A54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5089D0u, 0x5089D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5089D8u;
label_5089d8:
    // 0x5089d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5089d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5089dc: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x5089DCu;
    {
        const bool branch_taken_0x5089dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5089DCu;
        // 0x5089e0: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5089dc) {
            ctx->pc = 0x508AE4u;
            goto label_508ae4;
        }
    }
    ctx->pc = 0x5089E4u;
    // 0x5089e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x5089e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5089e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x5089e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5089ec: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x5089ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5089f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x5089f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x5089f4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x5089f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x5089f8: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x5089f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x5089fc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x5089fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x508a00: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508a04: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x508a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508a08: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x508a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508a0c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x508a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x508a10: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x508a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x508a14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508a18: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x508a18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508a1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508a20: 0x86a4c5c0  lh          $a0, -0x3A40($s5)
    ctx->pc = 0x508a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952384)));
    // 0x508a24: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x508a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x508a28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x508a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508a2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508a30: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x508a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x508a34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508a38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508a3c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x508a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508a40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x508a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x508a44: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x508a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x508a48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508a4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508a50: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508a54: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x508a54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x508a58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x508a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508a5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508a60: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x508a60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x508a64: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x508a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x508a68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508a6c: 0x8685c5c4  lh          $a1, -0x3A3C($s4)
    ctx->pc = 0x508a6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294952388)));
    // 0x508a70: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x508a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x508a74: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x508a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508a78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508a7c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x508a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x508a80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508a84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508a88: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x508a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508a8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x508a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x508a90: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x508a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x508a94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508a98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508a9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508a9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508aa0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x508aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x508aa4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x508aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508aa8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x508aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508aac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x508aacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508ab0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x508ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x508ab4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x508ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x508ab8: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x508ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x508abc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508ac0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x508ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508ac4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x508ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508ac8: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x508ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x508acc: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x508accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x508ad0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x508ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508ad4: 0xa467000c  sh          $a3, 0xC($v1)
    ctx->pc = 0x508ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x508ad8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x508ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x508adc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x508adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x508ae0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x508ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_508ae4:
    // 0x508ae4: 0x8ec2c5d0  lw          $v0, -0x3A30($s6)
    ctx->pc = 0x508ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952400)));
    // 0x508ae8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x508ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x508aec: 0x463ffb8  bgezl       $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x508AECu;
    {
        const bool branch_taken_0x508aec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x508aec) {
            ctx->pc = 0x508AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x508AECu;
            // 0x508af0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5089D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5089d0;
        }
    }
    ctx->pc = 0x508AF4u;
    // 0x508af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x508af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x508af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x508afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x508b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x508b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x508b04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x508b04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x508b08: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x508b08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x508b0c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x508b0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x508b10: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x508b10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x508b14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x508b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x508b18: 0x3e00008  jr          $ra
    ctx->pc = 0x508B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508B18u;
        // 0x508b1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x508B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508B20u;
label_508b20:
    // 0x508b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x508b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x508b24: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x508b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508b28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x508b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x508b2c: 0x2446c5c0  addiu       $a2, $v0, -0x3A40
    ctx->pc = 0x508b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952384));
    // 0x508b30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x508b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x508b34: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x508b34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x508b38: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x508b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x508b3c: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x508b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x508b40: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x508b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x508b44: 0x241e8000  addiu       $fp, $zero, -0x8000
    ctx->pc = 0x508b44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x508b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x508b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x508b4c: 0x26e7c5d0  addiu       $a3, $s7, -0x3A30
    ctx->pc = 0x508b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952400));
    // 0x508b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x508b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x508b54: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x508b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x508b58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x508b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x508b5c: 0x2489c5c4  addiu       $t1, $a0, -0x3A3C
    ctx->pc = 0x508b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952388));
    // 0x508b60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x508b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x508b64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x508b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x508b68: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x508b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x508b6c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x508b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC5D0u));
    // 0x508b70: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x508b70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5C0u));
    // 0x508b74: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x508b74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508b78: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x508b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x508b7c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x508b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5D0u, _value); } while (0);
    // 0x508b80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508b84: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x508b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x508b88: 0x24a80002  addiu       $t0, $a1, 0x2
    ctx->pc = 0x508b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x508b8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508b90: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x508b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x508b94: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x508b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x508b98: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x508b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x508b9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x508b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x508ba0: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x508ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x508ba4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x508ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508ba8: 0x2474c5b0  addiu       $s4, $v1, -0x3A50
    ctx->pc = 0x508ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952368));
    // 0x508bac: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x508bacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x508bb0: 0x24d3c5c8  addiu       $s3, $a2, -0x3A38
    ctx->pc = 0x508bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952392));
    // 0x508bb4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x508bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x508bb8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x508bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x508bbc: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x508bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x508bc0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x508bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508bc4: 0x0  nop
    ctx->pc = 0x508bc4u;
    // NOP
label_508bc8:
    // 0x508bc8: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x508bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508bcc: 0xc14481c  jal         func_512070
    ctx->pc = 0x508BCCu;
    SET_GPR_U32(ctx, 31, 0x508BD4u);
    ctx->pc = 0x508BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508BCCu;
    // 0x508bd0: 0x2444c5ac  addiu       $a0, $v0, -0x3A54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x508BCCu, 0x508BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508BD4u;
label_508bd4:
    // 0x508bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x508bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x508bd8: 0x544300c4  bnel        $v0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x508BD8u;
    {
        const bool branch_taken_0x508bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x508bd8) {
            ctx->pc = 0x508BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x508BD8u;
            // 0x508bdc: 0x8ee2c5d0  lw          $v0, -0x3A30($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x508EECu;
            goto label_508eec;
        }
    }
    ctx->pc = 0x508BE0u;
    // 0x508be0: 0x26f2c5d0  addiu       $s2, $s7, -0x3A30
    ctx->pc = 0x508be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952400));
    // 0x508be4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x508be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x508be8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x508be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508bec: 0x2450c5bc  addiu       $s0, $v0, -0x3A44
    ctx->pc = 0x508becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952380));
    // 0x508bf0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x508bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508bf4: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x508bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x508bf8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x508bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508bfc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x508bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x508c00: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x508c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x508c04: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x508c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x508c08: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x508c08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x508c0c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508c10: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x508c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508c14: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x508c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508c18: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x508c18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x508c1c: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x508c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x508c20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC5BCu));
    // 0x508c24: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x508c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x508c28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x508c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x508c2c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x508c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x508c30: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x508c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x508c34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x508c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x508c38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x508c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x508c3c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x508c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508c40: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x508C40u;
    {
        const bool branch_taken_0x508c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x508C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508C40u;
        // 0x508c44: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508c40) {
            ctx->pc = 0x508C70u;
            goto label_508c70;
        }
    }
    ctx->pc = 0x508C48u;
    // 0x508c48: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x508c48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x508c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508c50: 0x86a2c5b4  lh          $v0, -0x3A4C($s5)
    ctx->pc = 0x508c50u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC5B4u));
    // 0x508c54: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x508c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x508c58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x508c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x508c5c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x508C5Cu;
    SET_GPR_U32(ctx, 31, 0x508C64u);
    ctx->pc = 0x508C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508C5Cu;
    // 0x508c60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x508C5Cu, 0x508C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508C64u;
label_508c64:
    // 0x508c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x508C64u;
    {
        const bool branch_taken_0x508c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508C64u;
        // 0x508c68: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508c64) {
            ctx->pc = 0x508C74u;
            goto label_508c74;
        }
    }
    ctx->pc = 0x508C6Cu;
    // 0x508c6c: 0x0  nop
    ctx->pc = 0x508c6cu;
    // NOP
label_508c70:
    // 0x508c70: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x508c70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
label_508c74:
    // 0x508c74: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x508c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x508c78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508c7c: 0x8464c5c0  lh          $a0, -0x3A40($v1)
    ctx->pc = 0x508c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294952384)));
    // 0x508c80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508c84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508c88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x508c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x508c8c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x508c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508c90: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508c94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508c98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508c9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508ca0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508ca4: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x508ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x508ca8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x508ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508cac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x508cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508cb0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x508cb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x508cb4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x508cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x508cb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x508cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x508cbc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508cc0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x508cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x508cc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x508cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x508cc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x508cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x508ccc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x508cccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508cd0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x508CD0u;
    {
        const bool branch_taken_0x508cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x508CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508CD0u;
        // 0x508cd4: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508cd0) {
            ctx->pc = 0x508D00u;
            goto label_508d00;
        }
    }
    ctx->pc = 0x508CD8u;
    // 0x508cd8: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x508cd8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x508cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508ce0: 0x86c2c5b8  lh          $v0, -0x3A48($s6)
    ctx->pc = 0x508ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC5B8u));
    // 0x508ce4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x508ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x508ce8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x508ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x508cec: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x508CECu;
    SET_GPR_U32(ctx, 31, 0x508CF4u);
    ctx->pc = 0x508CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508CECu;
    // 0x508cf0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x508CECu, 0x508CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508CF4u;
label_508cf4:
    // 0x508cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x508CF4u;
    {
        const bool branch_taken_0x508cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x508CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508CF4u;
        // 0x508cf8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x508cf4) {
            ctx->pc = 0x508D04u;
            goto label_508d04;
        }
    }
    ctx->pc = 0x508CFCu;
    // 0x508cfc: 0x0  nop
    ctx->pc = 0x508cfcu;
    // NOP
label_508d00:
    // 0x508d00: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x508d00u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
label_508d04:
    // 0x508d04: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x508d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x508d08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508d0c: 0x8464c5c4  lh          $a0, -0x3A3C($v1)
    ctx->pc = 0x508d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294952388)));
    // 0x508d10: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508d10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508d14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508d18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x508d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x508d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508d20: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508d24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508d28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508d2c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x508d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508d30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508d34: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508d38: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x508d38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x508d3c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x508d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508d40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x508d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508d44: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x508d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x508d48: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x508d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x508d4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x508d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508d50: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x508d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508d54: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508d58: 0x86a8c5b4  lh          $t0, -0x3A4C($s5)
    ctx->pc = 0x508d58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952372)));
    // 0x508d5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x508d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x508d60: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x508d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x508d64: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x508d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x508d68: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x508d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x508d6c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x508d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x508d70: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x508d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508d74: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x508d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x508d78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x508d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x508d7c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x508d7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508d80: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x508d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508d84: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x508d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x508d88: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x508d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x508d8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508d90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508d90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508d94: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508d98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x508d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x508d9c: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x508d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x508da0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x508da0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508da4: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x508da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x508da8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x508da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x508dac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x508dacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x508db0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x508db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x508db4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x508db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x508db8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x508db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x508dbc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x508dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508dc0: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x508dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x508dc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x508dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x508dc8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x508DC8u;
    SET_GPR_U32(ctx, 31, 0x508DD0u);
    ctx->pc = 0x508DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508DC8u;
    // 0x508dcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x508DC8u, 0x508DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508DD0u;
label_508dd0:
    // 0x508dd0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x508dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x508dd8: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x508dd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508ddc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508de0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x508de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x508de4: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x508de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508de8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508dec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508df0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508df4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508df8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508dfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508e00: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508e04: 0xa4c20008  sh          $v0, 0x8($a2)
    ctx->pc = 0x508e04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x508e08: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x508e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x508e0c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x508e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508e10: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x508e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x508e14: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x508e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x508e18: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x508e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508e1c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x508e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508e20: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508e24: 0x86c8c5b8  lh          $t0, -0x3A48($s6)
    ctx->pc = 0x508e24u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952376)));
    // 0x508e28: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x508e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x508e2c: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x508e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x508e30: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x508e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x508e34: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x508e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x508e38: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x508e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x508e3c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x508e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x508e40: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x508e40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x508e44: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x508e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x508e48: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x508e48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508e4c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x508e4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508e50: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x508e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x508e54: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x508e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x508e58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508e5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508e5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508e60: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508e64: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x508e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x508e68: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x508e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x508e6c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x508e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508e70: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x508e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x508e74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x508e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x508e78: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x508e78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x508e7c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x508e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x508e80: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x508e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x508e84: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x508e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x508e88: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x508e88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508e8c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x508e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x508e90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x508e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x508e94: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x508E94u;
    SET_GPR_U32(ctx, 31, 0x508E9Cu);
    ctx->pc = 0x508E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x508E94u;
    // 0x508e98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x508E94u, 0x508E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x508E9Cu;
label_508e9c:
    // 0x508e9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508e9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508ea0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x508ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x508ea4: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x508ea4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508ea8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x508ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508eac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x508eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x508eb0: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x508eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508eb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x508eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x508eb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x508eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x508ebc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x508ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x508ec0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x508ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x508ec4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x508ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x508ec8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x508ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x508ecc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x508eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508ed0: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x508ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x508ed4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x508ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508ed8: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x508ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x508edc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x508edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x508ee0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x508ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x508ee4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x508ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x508ee8: 0x8ee2c5d0  lw          $v0, -0x3A30($s7)
    ctx->pc = 0x508ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952400)));
label_508eec:
    // 0x508eec: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x508eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x508ef0: 0x463ff35  bgezl       $v1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x508EF0u;
    {
        const bool branch_taken_0x508ef0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x508ef0) {
            ctx->pc = 0x508EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x508EF0u;
            // 0x508ef4: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x508BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_508bc8;
        }
    }
    ctx->pc = 0x508EF8u;
    // 0x508ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x508ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x508efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508f00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x508f00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x508f04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x508f04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x508f08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x508f08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x508f0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x508f0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x508f10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x508f10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x508f14: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x508f14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x508f18: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x508f18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x508f1c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x508f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x508f20: 0x3e00008  jr          $ra
    ctx->pc = 0x508F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508F20u;
        // 0x508f24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x508F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508F28u;
}
