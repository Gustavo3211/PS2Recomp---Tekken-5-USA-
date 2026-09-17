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

// Function: sub_002CF930
// Address: 0x2cf930 - 0x2cfdc8
void sub_002CF930_0x2cf930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF930_0x2cf930");
#endif

    switch (ctx->pc) {
        case 0x2cf94cu: goto label_2cf94c;
        case 0x2cfb84u: goto label_2cfb84;
        default: break;
    }

    ctx->pc = 0x2cf930u;

    // 0x2cf930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf93c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf940: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cf944: 0xc09d49e  jal         func_275278
    ctx->pc = 0x2CF944u;
    SET_GPR_U32(ctx, 31, 0x2CF94Cu);
    ctx->pc = 0x2CF948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF944u;
    // 0x2cf948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275278u, 0x2CF944u, 0x2CF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF94Cu;
label_2cf94c:
    // 0x2cf94c: 0x54400118  bnel        $v0, $zero, . + 4 + (0x118 << 2)
    ctx->pc = 0x2CF94Cu;
    {
        const bool branch_taken_0x2cf94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf94c) {
            ctx->pc = 0x2CF950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF94Cu;
            // 0x2cf950: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFDB0u;
            goto label_2cfdb0;
        }
    }
    ctx->pc = 0x2CF954u;
    // 0x2cf954: 0x8e050310  lw          $a1, 0x310($s0)
    ctx->pc = 0x2cf954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x2cf958: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2CF958u;
    {
        const bool branch_taken_0x2cf958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF958u;
        // 0x2cf95c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf958) {
            ctx->pc = 0x2CF998u;
            goto label_2cf998;
        }
    }
    ctx->pc = 0x2CF960u;
    // 0x2cf960: 0x86040096  lh          $a0, 0x96($s0)
    ctx->pc = 0x2cf960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2cf964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf968: 0x860202fe  lh          $v0, 0x2FE($s0)
    ctx->pc = 0x2cf968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2cf96c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2cf96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF970u;
    {
        const bool branch_taken_0x2cf970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF970u;
        // 0x2cf974: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf970) {
            ctx->pc = 0x2CF98Cu;
            goto label_2cf98c;
        }
    }
    ctx->pc = 0x2CF978u;
    // 0x2cf978: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2cf978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2cf97c: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x2cf97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2cf980: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2cf980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf984: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF984u;
    {
        const bool branch_taken_0x2cf984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf984) {
            ctx->pc = 0x2CF9A0u;
            goto label_2cf9a0;
        }
    }
    ctx->pc = 0x2CF98Cu;
label_2cf98c:
    // 0x2cf98c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF98Cu;
    {
        const bool branch_taken_0x2cf98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF98Cu;
        // 0x2cf990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf98c) {
            ctx->pc = 0x2CF9A0u;
            goto label_2cf9a0;
        }
    }
    ctx->pc = 0x2CF994u;
    // 0x2cf994: 0x0  nop
    ctx->pc = 0x2cf994u;
    // NOP
label_2cf998:
    // 0x2cf998: 0x960b0096  lhu         $t3, 0x96($s0)
    ctx->pc = 0x2cf998u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2cf99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf9a0:
    // 0x2cf9a0: 0x54a00047  bnel        $a1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CF9A0u;
    {
        const bool branch_taken_0x2cf9a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf9a0) {
            ctx->pc = 0x2CF9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF9A0u;
            // 0x2cf9a4: 0x92020190  lbu         $v0, 0x190($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAC0u;
            goto label_2cfac0;
        }
    }
    ctx->pc = 0x2CF9A8u;
    // 0x2cf9a8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2cf9ac: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2cf9b0: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2cf9b4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2cf9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cf9b8: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2cf9bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2cf9bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf9c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cf9c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cf9c4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2cf9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2cf9c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf9d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf9d4: 0x24a70fff  addiu       $a3, $a1, 0xFFF
    ctx->pc = 0x2cf9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4095));
    // 0x2cf9d8: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x2cf9d8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2cf9dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cf9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9e0: 0x960800a4  lhu         $t0, 0xA4($s0)
    ctx->pc = 0x2cf9e0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x2cf9e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cf9e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cf9e8: 0xe6200b  movn        $a0, $a3, $a2
    ctx->pc = 0x2cf9e8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x2cf9ec: 0x24690fff  addiu       $t1, $v1, 0xFFF
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x2cf9f0: 0x244a0fff  addiu       $t2, $v0, 0xFFF
    ctx->pc = 0x2cf9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x2cf9f4: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x2cf9f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2cf9f8: 0x28470000  slti        $a3, $v0, 0x0
    ctx->pc = 0x2cf9f8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2cf9fc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x2cf9fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x2cfa00: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x2cfa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x2cfa04: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x2cfa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x2cfa08: 0x147100b  movn        $v0, $t2, $a3
    ctx->pc = 0x2cfa08u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x2cfa0c: 0x126180b  movn        $v1, $t1, $a2
    ctx->pc = 0x2cfa0cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x2cfa10: 0x9606009e  lhu         $a2, 0x9E($s0)
    ctx->pc = 0x2cfa10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x2cfa14: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x2cfa14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x2cfa18: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x2cfa18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x2cfa1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cfa1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cfa20: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x2cfa20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2cfa24: 0xa60600a0  sh          $a2, 0xA0($s0)
    ctx->pc = 0x2cfa24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cfa28: 0xa603009c  sh          $v1, 0x9C($s0)
    ctx->pc = 0x2cfa28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cfa2c: 0xa602009e  sh          $v0, 0x9E($s0)
    ctx->pc = 0x2cfa2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfa30: 0xa60800a4  sh          $t0, 0xA4($s0)
    ctx->pc = 0x2cfa30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 8));
    // 0x2cfa34: 0xa60b009a  sh          $t3, 0x9A($s0)
    ctx->pc = 0x2cfa34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 11));
    // 0x2cfa38: 0xe60100a8  swc1        $f1, 0xA8($s0)
    ctx->pc = 0x2cfa38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2cfa3c: 0xa20001f7  sb          $zero, 0x1F7($s0)
    ctx->pc = 0x2cfa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 503), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfa40: 0xa20001f8  sb          $zero, 0x1F8($s0)
    ctx->pc = 0x2cfa40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 504), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfa44: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2cfa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2cfa48: 0x1ce00003  bgtz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFA48u;
    {
        const bool branch_taken_0x2cfa48 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2CFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA48u;
        // 0x2cfa4c: 0xa6040096  sh          $a0, 0x96($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa48) {
            ctx->pc = 0x2CFA58u;
            goto label_2cfa58;
        }
    }
    ctx->pc = 0x2CFA50u;
    // 0x2cfa50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfa54: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2cfa54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
label_2cfa58:
    // 0x2cfa58: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2cfa5c: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2cfa5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2cfa60: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x2cfa60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2cfa64: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2cfa64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2cfa68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cfa6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFA6Cu;
    {
        const bool branch_taken_0x2cfa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfa6c) {
            ctx->pc = 0x2CFA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA6Cu;
            // 0x2cfa70: 0x94820024  lhu         $v0, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA80u;
            goto label_2cfa80;
        }
    }
    ctx->pc = 0x2CFA74u;
    // 0x2cfa74: 0xa6030096  sh          $v1, 0x96($s0)
    ctx->pc = 0x2cfa74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cfa78: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x2cfa78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa7c: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x2cfa7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_2cfa80:
    // 0x2cfa80: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x2cfa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfa88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cfa88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cfa8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cfa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfa90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFA90u;
    {
        const bool branch_taken_0x2cfa90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA90u;
        // 0x2cfa94: 0xb1400  sll         $v0, $t3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa90) {
            ctx->pc = 0x2CFAA0u;
            goto label_2cfaa0;
        }
    }
    ctx->pc = 0x2CFA98u;
    // 0x2cfa98: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2cfa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2cfa9c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2cfa9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2cfaa0:
    // 0x2cfaa0: 0x8603009a  lh          $v1, 0x9A($s0)
    ctx->pc = 0x2cfaa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x2cfaa4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2cfaa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2cfaa8: 0xe60100ac  swc1        $f1, 0xAC($s0)
    ctx->pc = 0x2cfaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2cfaac: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x2cfaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2cfab0: 0xa60b00a2  sh          $t3, 0xA2($s0)
    ctx->pc = 0x2cfab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 11));
    // 0x2cfab4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2cfab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cfab8: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x2CFAB8u;
    {
        const bool branch_taken_0x2cfab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFAB8u;
        // 0x2cfabc: 0xa20301fe  sb          $v1, 0x1FE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 510), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfab8) {
            ctx->pc = 0x2CFDACu;
            goto label_2cfdac;
        }
    }
    ctx->pc = 0x2CFAC0u;
label_2cfac0:
    // 0x2cfac0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cfac4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFAC4u;
    {
        const bool branch_taken_0x2cfac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cfac4) {
            ctx->pc = 0x2CFAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFAC4u;
            // 0x2cfac8: 0x9208030f  lbu         $t0, 0x30F($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 783)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFAD8u;
            goto label_2cfad8;
        }
    }
    ctx->pc = 0x2CFACCu;
    // 0x2cfacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfad0: 0xa60202fe  sh          $v0, 0x2FE($s0)
    ctx->pc = 0x2cfad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfad4: 0x9208030f  lbu         $t0, 0x30F($s0)
    ctx->pc = 0x2cfad4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 783)));
label_2cfad8:
    // 0x2cfad8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2cfad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfadc: 0x9209030d  lbu         $t1, 0x30D($s0)
    ctx->pc = 0x2cfadcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 781)));
    // 0x2cfae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cfae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfae8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2cfae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2cfaec: 0x3407a000  ori         $a3, $zero, 0xA000
    ctx->pc = 0x2cfaecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x2cfaf0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cfaf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfaf4: 0xa6040144  sh          $a0, 0x144($s0)
    ctx->pc = 0x2cfaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 324), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cfaf8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2cfaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2cfafc: 0xa6050146  sh          $a1, 0x146($s0)
    ctx->pc = 0x2cfafcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 326), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cfb00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cfb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cfb04: 0xa604015c  sh          $a0, 0x15C($s0)
    ctx->pc = 0x2cfb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cfb08: 0xa60b02f4  sh          $t3, 0x2F4($s0)
    ctx->pc = 0x2cfb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 756), (uint16_t)GPR_U32(ctx, 11));
    // 0x2cfb0c: 0xa60802f6  sh          $t0, 0x2F6($s0)
    ctx->pc = 0x2cfb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 8));
    // 0x2cfb10: 0xa60902fa  sh          $t1, 0x2FA($s0)
    ctx->pc = 0x2cfb10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 762), (uint16_t)GPR_U32(ctx, 9));
    // 0x2cfb14: 0xa20201bb  sb          $v0, 0x1BB($s0)
    ctx->pc = 0x2cfb14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 443), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cfb18: 0xae0600d0  sw          $a2, 0xD0($s0)
    ctx->pc = 0x2cfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 6));
    // 0x2cfb1c: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x2cfb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x2cfb20: 0xa200019a  sb          $zero, 0x19A($s0)
    ctx->pc = 0x2cfb20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb24: 0xae1100d8  sw          $s1, 0xD8($s0)
    ctx->pc = 0x2cfb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
    // 0x2cfb28: 0xa600008e  sh          $zero, 0x8E($s0)
    ctx->pc = 0x2cfb28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfb2c: 0xa200019c  sb          $zero, 0x19C($s0)
    ctx->pc = 0x2cfb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 412), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb30: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x2cfb30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfb34: 0xa20001a5  sb          $zero, 0x1A5($s0)
    ctx->pc = 0x2cfb34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb38: 0xa20001a7  sb          $zero, 0x1A7($s0)
    ctx->pc = 0x2cfb38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 423), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb3c: 0xa20001a8  sb          $zero, 0x1A8($s0)
    ctx->pc = 0x2cfb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 424), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb40: 0xa20001a9  sb          $zero, 0x1A9($s0)
    ctx->pc = 0x2cfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 425), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb44: 0xa20001aa  sb          $zero, 0x1AA($s0)
    ctx->pc = 0x2cfb44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 426), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfb48: 0x8d42003c  lw          $v0, 0x3C($t2)
    ctx->pc = 0x2cfb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x2cfb4c: 0xa2050194  sb          $a1, 0x194($s0)
    ctx->pc = 0x2cfb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cfb50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cfb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cfb54: 0xa604016e  sh          $a0, 0x16E($s0)
    ctx->pc = 0x2cfb54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 366), (uint16_t)GPR_U32(ctx, 4));
    // 0x2cfb58: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2cfb58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x2cfb5c: 0xa2050193  sb          $a1, 0x193($s0)
    ctx->pc = 0x2cfb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 403), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cfb60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cfb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cfb64: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x2cfb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x2cfb68: 0xa20201ab  sb          $v0, 0x1AB($s0)
    ctx->pc = 0x2cfb68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 427), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cfb6c: 0xa600016a  sh          $zero, 0x16A($s0)
    ctx->pc = 0x2cfb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 362), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfb70: 0xa600016c  sh          $zero, 0x16C($s0)
    ctx->pc = 0x2cfb70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 364), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfb74: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2cfb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2cfb78: 0x95420024  lhu         $v0, 0x24($t2)
    ctx->pc = 0x2cfb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x2cfb7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2CFB7Cu;
    SET_GPR_U32(ctx, 31, 0x2CFB84u);
    ctx->pc = 0x2CFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB7Cu;
    // 0x2cfb80: 0xa6020170  sh          $v0, 0x170($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 368), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2CFB7Cu, 0x2CFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB84u;
label_2cfb84:
    // 0x2cfb84: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2cfb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2cfb88: 0x2404ff1f  addiu       $a0, $zero, -0xE1
    ctx->pc = 0x2cfb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x2cfb8c: 0x92050190  lbu         $a1, 0x190($s0)
    ctx->pc = 0x2cfb8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2cfb90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cfb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cfb94: 0xa6020176  sh          $v0, 0x176($s0)
    ctx->pc = 0x2cfb94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 374), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfb98: 0x10b2000b  beq         $a1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFB98u;
    {
        const bool branch_taken_0x2cfb98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB98u;
        // 0x2cfb9c: 0xae0300cc  sw          $v1, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfb98) {
            ctx->pc = 0x2CFBC8u;
            goto label_2cfbc8;
        }
    }
    ctx->pc = 0x2CFBA0u;
    // 0x2cfba0: 0x10b1000a  beq         $a1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFBA0u;
    {
        const bool branch_taken_0x2cfba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBA0u;
        // 0x2cfba4: 0x8e050310  lw          $a1, 0x310($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfba0) {
            ctx->pc = 0x2CFBCCu;
            goto label_2cfbcc;
        }
    }
    ctx->pc = 0x2CFBA8u;
    // 0x2cfba8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2cfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2cfbac: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2cfbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cfbb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cfbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cfbb4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFBB4u;
    {
        const bool branch_taken_0x2cfbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBB4u;
        // 0x2cfbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbb4) {
            ctx->pc = 0x2CFBD4u;
            goto label_2cfbd4;
        }
    }
    ctx->pc = 0x2CFBBCu;
    // 0x2cfbbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFBBCu;
    {
        const bool branch_taken_0x2cfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBBCu;
        // 0x2cfbc0: 0xa20201f7  sb          $v0, 0x1F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 503), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbbc) {
            ctx->pc = 0x2CFBD4u;
            goto label_2cfbd4;
        }
    }
    ctx->pc = 0x2CFBC4u;
    // 0x2cfbc4: 0x0  nop
    ctx->pc = 0x2cfbc4u;
    // NOP
label_2cfbc8:
    // 0x2cfbc8: 0x8e050310  lw          $a1, 0x310($s0)
    ctx->pc = 0x2cfbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
label_2cfbcc:
    // 0x2cfbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfbd0: 0xa20201f7  sb          $v0, 0x1F7($s0)
    ctx->pc = 0x2cfbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 503), (uint8_t)GPR_U32(ctx, 2));
label_2cfbd4:
    // 0x2cfbd4: 0x96030306  lhu         $v1, 0x306($s0)
    ctx->pc = 0x2cfbd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 774)));
    // 0x2cfbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfbdc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFBDCu;
    {
        const bool branch_taken_0x2cfbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBDCu;
        // 0x2cfbe0: 0xa20201f8  sb          $v0, 0x1F8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 504), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbdc) {
            ctx->pc = 0x2CFBECu;
            goto label_2cfbec;
        }
    }
    ctx->pc = 0x2CFBE4u;
    // 0x2cfbe4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cfbe8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2cfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2cfbec:
    // 0x2cfbec: 0x96060300  lhu         $a2, 0x300($s0)
    ctx->pc = 0x2cfbecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x2cfbf0: 0x30c33c00  andi        $v1, $a2, 0x3C00
    ctx->pc = 0x2cfbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15360);
    // 0x2cfbf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFBF4u;
    {
        const bool branch_taken_0x2cfbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBF4u;
        // 0x2cfbf8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfbf4) {
            ctx->pc = 0x2CFC10u;
            goto label_2cfc10;
        }
    }
    ctx->pc = 0x2CFBFCu;
    // 0x2cfbfc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFBFCu;
    {
        const bool branch_taken_0x2cfbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfbfc) {
            ctx->pc = 0x2CFC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFBFCu;
            // 0x2cfc00: 0x96030302  lhu         $v1, 0x302($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 770)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC28u;
            goto label_2cfc28;
        }
    }
    ctx->pc = 0x2CFC04u;
    // 0x2cfc04: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2CFC04u;
    {
        const bool branch_taken_0x2cfc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC04u;
        // 0x2cfc08: 0x960b0096  lhu         $t3, 0x96($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc04) {
            ctx->pc = 0x2CFCD0u;
            goto label_2cfcd0;
        }
    }
    ctx->pc = 0x2CFC0Cu;
    // 0x2cfc0c: 0x0  nop
    ctx->pc = 0x2cfc0cu;
    // NOP
label_2cfc10:
    // 0x2cfc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfc14: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x2cfc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
    // 0x2cfc18: 0xa60200a2  sh          $v0, 0xA2($s0)
    ctx->pc = 0x2cfc18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfc1c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cfc1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfc20: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CFC20u;
    {
        const bool branch_taken_0x2cfc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC20u;
        // 0x2cfc24: 0xa6020096  sh          $v0, 0x96($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc20) {
            ctx->pc = 0x2CFCCCu;
            goto label_2cfccc;
        }
    }
    ctx->pc = 0x2CFC28u;
label_2cfc28:
    // 0x2cfc28: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2cfc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2cfc2c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFC2Cu;
    {
        const bool branch_taken_0x2cfc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc2c) {
            ctx->pc = 0x2CFC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFC2Cu;
            // 0x2cfc30: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC40u;
            goto label_2cfc40;
        }
    }
    ctx->pc = 0x2CFC34u;
    // 0x2cfc34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFC34u;
    {
        const bool branch_taken_0x2cfc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC34u;
        // 0x2cfc38: 0x96020096  lhu         $v0, 0x96($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc34) {
            ctx->pc = 0x2CFC5Cu;
            goto label_2cfc5c;
        }
    }
    ctx->pc = 0x2CFC3Cu;
    // 0x2cfc3c: 0x0  nop
    ctx->pc = 0x2cfc3cu;
    // NOP
label_2cfc40:
    // 0x2cfc40: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFC40u;
    {
        const bool branch_taken_0x2cfc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc40) {
            ctx->pc = 0x2CFC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFC40u;
            // 0x2cfc44: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC50u;
            goto label_2cfc50;
        }
    }
    ctx->pc = 0x2CFC48u;
    // 0x2cfc48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CFC48u;
    {
        const bool branch_taken_0x2cfc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC48u;
        // 0x2cfc4c: 0x96020096  lhu         $v0, 0x96($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc48) {
            ctx->pc = 0x2CFC7Cu;
            goto label_2cfc7c;
        }
    }
    ctx->pc = 0x2CFC50u;
label_2cfc50:
    // 0x2cfc50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFC50u;
    {
        const bool branch_taken_0x2cfc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC50u;
        // 0x2cfc54: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc50) {
            ctx->pc = 0x2CFC70u;
            goto label_2cfc70;
        }
    }
    ctx->pc = 0x2CFC58u;
    // 0x2cfc58: 0x9602009e  lhu         $v0, 0x9E($s0)
    ctx->pc = 0x2cfc58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
label_2cfc5c:
    // 0x2cfc5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cfc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cfc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFC64u;
    {
        const bool branch_taken_0x2cfc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC64u;
        // 0x2cfc68: 0xa6020096  sh          $v0, 0x96($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc64) {
            ctx->pc = 0x2CFC88u;
            goto label_2cfc88;
        }
    }
    ctx->pc = 0x2CFC6Cu;
    // 0x2cfc6c: 0x0  nop
    ctx->pc = 0x2cfc6cu;
    // NOP
label_2cfc70:
    // 0x2cfc70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFC70u;
    {
        const bool branch_taken_0x2cfc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc70) {
            ctx->pc = 0x2CFC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFC70u;
            // 0x2cfc74: 0xa6030096  sh          $v1, 0x96($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC88u;
            goto label_2cfc88;
        }
    }
    ctx->pc = 0x2CFC78u;
    // 0x2cfc78: 0x9602009e  lhu         $v0, 0x9E($s0)
    ctx->pc = 0x2cfc78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
label_2cfc7c:
    // 0x2cfc7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cfc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cfc80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2cfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfc84: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2cfc84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
label_2cfc88:
    // 0x2cfc88: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x2cfc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2cfc8c: 0x94a40024  lhu         $a0, 0x24($a1)
    ctx->pc = 0x2cfc8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2cfc90: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2cfc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cfc94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFC94u;
    {
        const bool branch_taken_0x2cfc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC94u;
        // 0x2cfc98: 0x60582d  daddu       $t3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc94) {
            ctx->pc = 0x2CFCACu;
            goto label_2cfcac;
        }
    }
    ctx->pc = 0x2CFC9Cu;
    // 0x2cfc9c: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2cfc9cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cfca0: 0x1010  mfhi        $v0
    ctx->pc = 0x2cfca0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cfca4: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2cfca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfca8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2cfca8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cfcac:
    // 0x2cfcac: 0xb1400  sll         $v0, $t3, 16
    ctx->pc = 0x2cfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2cfcb0: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFCB0u;
    {
        const bool branch_taken_0x2cfcb0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2cfcb0) {
            ctx->pc = 0x2CFCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFCB0u;
            // 0x2cfcb4: 0xa60b00a2  sh          $t3, 0xA2($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFCC8u;
            goto label_2cfcc8;
        }
    }
    ctx->pc = 0x2CFCB8u;
    // 0x2cfcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfcbc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cfcbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfcc0: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2cfcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfcc4: 0xa60b00a2  sh          $t3, 0xA2($s0)
    ctx->pc = 0x2cfcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 11));
label_2cfcc8:
    // 0x2cfcc8: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x2cfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
label_2cfccc:
    // 0x2cfccc: 0xa6000148  sh          $zero, 0x148($s0)
    ctx->pc = 0x2cfcccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 0));
label_2cfcd0:
    // 0x2cfcd0: 0x96020304  lhu         $v0, 0x304($s0)
    ctx->pc = 0x2cfcd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2cfcd4: 0x920301f7  lbu         $v1, 0x1F7($s0)
    ctx->pc = 0x2cfcd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 503)));
    // 0x2cfcd8: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x2cfcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x2cfcdc: 0xa6020158  sh          $v0, 0x158($s0)
    ctx->pc = 0x2cfcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfce0: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x2cfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x2cfce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFCE4u;
    {
        const bool branch_taken_0x2cfce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCE4u;
        // 0x2cfce8: 0xa6000304  sh          $zero, 0x304($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfce4) {
            ctx->pc = 0x2CFCF8u;
            goto label_2cfcf8;
        }
    }
    ctx->pc = 0x2CFCECu;
    // 0x2cfcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfcf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CFCF0u;
    {
        const bool branch_taken_0x2cfcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCF0u;
        // 0x2cfcf4: 0xa602009c  sh          $v0, 0x9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfcf0) {
            ctx->pc = 0x2CFCFCu;
            goto label_2cfcfc;
        }
    }
    ctx->pc = 0x2CFCF8u;
label_2cfcf8:
    // 0x2cfcf8: 0xa60b009c  sh          $t3, 0x9C($s0)
    ctx->pc = 0x2cfcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 11));
label_2cfcfc:
    // 0x2cfcfc: 0x86030146  lh          $v1, 0x146($s0)
    ctx->pc = 0x2cfcfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
    // 0x2cfd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfd04: 0xa60200a4  sh          $v0, 0xA4($s0)
    ctx->pc = 0x2cfd04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfd08: 0xa606015a  sh          $a2, 0x15A($s0)
    ctx->pc = 0x2cfd08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 346), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cfd0c: 0xa602009e  sh          $v0, 0x9E($s0)
    ctx->pc = 0x2cfd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfd10: 0xa60000a6  sh          $zero, 0xA6($s0)
    ctx->pc = 0x2cfd10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfd14: 0xa6000300  sh          $zero, 0x300($s0)
    ctx->pc = 0x2cfd14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfd18: 0xa200030d  sb          $zero, 0x30D($s0)
    ctx->pc = 0x2cfd18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd1c: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x2cfd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd20: 0xa200030e  sb          $zero, 0x30E($s0)
    ctx->pc = 0x2cfd20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd24: 0xa200030f  sb          $zero, 0x30F($s0)
    ctx->pc = 0x2cfd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd28: 0xa20001b9  sb          $zero, 0x1B9($s0)
    ctx->pc = 0x2cfd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 441), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd2c: 0xa6000306  sh          $zero, 0x306($s0)
    ctx->pc = 0x2cfd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cfd30: 0xa20001b2  sb          $zero, 0x1B2($s0)
    ctx->pc = 0x2cfd30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cfd34: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFD34u;
    {
        const bool branch_taken_0x2cfd34 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD34u;
        // 0x2cfd38: 0x96050146  lhu         $a1, 0x146($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd34) {
            ctx->pc = 0x2CFD48u;
            goto label_2cfd48;
        }
    }
    ctx->pc = 0x2CFD3Cu;
    // 0x2cfd3c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cfd40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CFD40u;
    {
        const bool branch_taken_0x2cfd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD40u;
        // 0x2cfd44: 0xa60202fe  sh          $v0, 0x2FE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd40) {
            ctx->pc = 0x2CFD4Cu;
            goto label_2cfd4c;
        }
    }
    ctx->pc = 0x2CFD48u;
label_2cfd48:
    // 0x2cfd48: 0xa60002fe  sh          $zero, 0x2FE($s0)
    ctx->pc = 0x2cfd48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 0));
label_2cfd4c:
    // 0x2cfd4c: 0xb3400  sll         $a2, $t3, 16
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x2cfd50: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2cfd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2cfd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cfd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfd58: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2cfd58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2cfd5c: 0x9607009e  lhu         $a3, 0x9E($s0)
    ctx->pc = 0x2cfd5cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x2cfd60: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2cfd60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cfd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cfd68: 0x8603009c  lh          $v1, 0x9C($s0)
    ctx->pc = 0x2cfd68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2cfd6c: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x2cfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2cfd70: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cfd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cfd74: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2cfd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2cfd78: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2cfd7c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2cfd7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2cfd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfd84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cfd88: 0xa20201fe  sb          $v0, 0x1FE($s0)
    ctx->pc = 0x2cfd88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 510), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cfd8c: 0xa60b009a  sh          $t3, 0x9A($s0)
    ctx->pc = 0x2cfd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 11));
    // 0x2cfd90: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x2cfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x2cfd94: 0xae0400b8  sw          $a0, 0xB8($s0)
    ctx->pc = 0x2cfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 4));
    // 0x2cfd98: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x2cfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x2cfd9c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2cfd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2cfda0: 0xae0600b0  sw          $a2, 0xB0($s0)
    ctx->pc = 0x2cfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 6));
    // 0x2cfda4: 0xa60700a0  sh          $a3, 0xA0($s0)
    ctx->pc = 0x2cfda4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 7));
    // 0x2cfda8: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2cfda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_2cfdac:
    // 0x2cfdac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfdb0:
    // 0x2cfdb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfdb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfdb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfdb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfdb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cfdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDBCu;
        // 0x2cfdc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFDC4u;
    // 0x2cfdc4: 0x0  nop
    ctx->pc = 0x2cfdc4u;
    // NOP
    ctx->pc = 0x2cfdc8u;
}
