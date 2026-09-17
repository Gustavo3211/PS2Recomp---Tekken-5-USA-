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

// Function: sub_00491908
// Address: 0x491908 - 0x491a80
void sub_00491908_0x491908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491908_0x491908");
#endif

    switch (ctx->pc) {
        case 0x49191cu: goto label_49191c;
        case 0x491924u: goto label_491924;
        default: break;
    }

    ctx->pc = 0x491908u;

    // 0x491908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x491908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49190c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x491910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x491910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x491914: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x491914u;
    SET_GPR_U32(ctx, 31, 0x49191Cu);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x491914u, 0x49191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49191Cu;
label_49191c:
    // 0x49191c: 0xc124620  jal         func_491880
    ctx->pc = 0x49191Cu;
    SET_GPR_U32(ctx, 31, 0x491924u);
    ctx->pc = 0x491920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49191Cu;
    // 0x491920: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x49191Cu, 0x491924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491924u;
label_491924:
    // 0x491924: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x491924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x491928: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x491928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x49192c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x49192cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x491930: 0x24690058  addiu       $t1, $v1, 0x58
    ctx->pc = 0x491930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x491934: 0x2468005c  addiu       $t0, $v1, 0x5C
    ctx->pc = 0x491934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
    // 0x491938: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x491938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x49193c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x491940: 0x8463e804  lh          $v1, -0x17FC($v1)
    ctx->pc = 0x491940u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961156)));
    // 0x491944: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x491944u;
    {
        const bool branch_taken_0x491944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x491948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491944u;
        // 0x491948: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x491944) {
            ctx->pc = 0x49195Cu;
            goto label_49195c;
        }
    }
    ctx->pc = 0x49194Cu;
    // 0x49194c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x491950: 0x8443fd06  lh          $v1, -0x2FA($v0)
    ctx->pc = 0x491950u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x491954: 0x54600047  bnel        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x491954u;
    {
        const bool branch_taken_0x491954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x491954) {
            ctx->pc = 0x491958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x491954u;
            // 0x491958: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x491A74u;
            goto label_491a74;
        }
    }
    ctx->pc = 0x49195Cu;
label_49195c:
    // 0x49195c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x49195cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x491960: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x491960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x491964: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x491964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x491968: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x491968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49196c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x49196cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x491970: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x491970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x491974: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x491974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x491978: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x491978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x49197c: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x49197cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x491980: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x491980u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x491984: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491988: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x491988u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49198c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x49198cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491990: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491994: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x491994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x491998: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49199c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919a0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4919a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4919a4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919ac: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x4919acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x4919b0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919b8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4919b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4919bc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919c0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919c4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x4919c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4919c8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919d0: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x4919d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x4919d4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919d8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919dc: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x4919dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4919e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919e4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919e8: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x4919e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4919ec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919f0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4919f4: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x4919f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4919f8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4919f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4919fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4919fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a00: 0x96030016  lhu         $v1, 0x16($s0)
    ctx->pc = 0x491a00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x491a04: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a08: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a0c: 0x96030060  lhu         $v1, 0x60($s0)
    ctx->pc = 0x491a0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x491a10: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a18: 0x96030062  lhu         $v1, 0x62($s0)
    ctx->pc = 0x491a18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x491a1c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a20: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a24: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x491a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x491a28: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a30: 0x96030066  lhu         $v1, 0x66($s0)
    ctx->pc = 0x491a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x491a34: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a3c: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x491a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x491a40: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a44: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a48: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x491a48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x491a4c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a50: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a54: 0x9603002c  lhu         $v1, 0x2C($s0)
    ctx->pc = 0x491a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x491a58: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x491a58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x491a5c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x491a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x491a60: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x491a60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x491a64: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x491a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x491a68: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x491a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x491a6c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x491a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x491a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x491a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_491a74:
    // 0x491a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x491a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x491a78: 0x3e00008  jr          $ra
    ctx->pc = 0x491A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491A78u;
        // 0x491a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491A80u;
}
