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

// Function: sub_00100930
// Address: 0x100930 - 0x100a78
void sub_00100930_0x100930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100930_0x100930");
#endif

    switch (ctx->pc) {
        case 0x100a5cu: goto label_100a5c;
        default: break;
    }

    ctx->pc = 0x100930u;

    // 0x100930: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x100930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100934: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100938: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10093c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100944: 0x3c11002e  lui         $s1, 0x2E
    ctx->pc = 0x100944u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)46 << 16));
    // 0x100948: 0x36316380  ori         $s1, $s1, 0x6380
    ctx->pc = 0x100948u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)25472);
    // 0x10094c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x10094cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x100950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100954: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x100958: 0x3652f800  ori         $s2, $s2, 0xF800
    ctx->pc = 0x100958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)63488);
    // 0x10095c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x100960: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100964: 0x3c130004  lui         $s3, 0x4
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4 << 16));
    // 0x100968: 0x3673d440  ori         $s3, $s3, 0xD440
    ctx->pc = 0x100968u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)54336);
    // 0x10096c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x10096cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x100970: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100974: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x100978: 0x36103400  ori         $s0, $s0, 0x3400
    ctx->pc = 0x100978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13312);
    // 0x10097c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x100980: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x100984: 0x34c6b440  ori         $a2, $a2, 0xB440
    ctx->pc = 0x100984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46144);
    // 0x100988: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x100988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10098c: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x10098cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x100990: 0x34e7e1c0  ori         $a3, $a3, 0xE1C0
    ctx->pc = 0x100990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57792);
    // 0x100994: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x100994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x100998: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x100998u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x10099c: 0x3508c600  ori         $t0, $t0, 0xC600
    ctx->pc = 0x10099cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)50688);
    // 0x1009a0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1009a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1009a4: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1009a8: 0x3529ad00  ori         $t1, $t1, 0xAD00
    ctx->pc = 0x1009a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)44288);
    // 0x1009ac: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1009b0: 0x3c0a0035  lui         $t2, 0x35
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)53 << 16));
    // 0x1009b4: 0x354af380  ori         $t2, $t2, 0xF380
    ctx->pc = 0x1009b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)62336);
    // 0x1009b8: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1009bc: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x1009c0: 0x356bab40  ori         $t3, $t3, 0xAB40
    ctx->pc = 0x1009c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)43840);
    // 0x1009c4: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x1009c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1009c8: 0x3c0c003f  lui         $t4, 0x3F
    ctx->pc = 0x1009c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)63 << 16));
    // 0x1009cc: 0x358c8580  ori         $t4, $t4, 0x8580
    ctx->pc = 0x1009ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)34176);
    // 0x1009d0: 0x1836021  addu        $t4, $t4, $v1
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1009d4: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x1009d8: 0x35adc100  ori         $t5, $t5, 0xC100
    ctx->pc = 0x1009d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)49408);
    // 0x1009dc: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1009dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1009e0: 0x3c0e0018  lui         $t6, 0x18
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)24 << 16));
    // 0x1009e4: 0x35ce09c0  ori         $t6, $t6, 0x9C0
    ctx->pc = 0x1009e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)2496);
    // 0x1009e8: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x1009e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1009ec: 0x3c0f0020  lui         $t7, 0x20
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32 << 16));
    // 0x1009f0: 0x35ef84c0  ori         $t7, $t7, 0x84C0
    ctx->pc = 0x1009f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)33984);
    // 0x1009f4: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1009f8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x1009fc: 0x34a5f080  ori         $a1, $a1, 0xF080
    ctx->pc = 0x1009fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61568);
    // 0x100a00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x100a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x100a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100a08: 0xac5300e4  sw          $s3, 0xE4($v0)
    ctx->pc = 0x100a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x1BCA2A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2A4u, _value); } while (0);
    // 0x100a0c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x100a10: 0x34841800  ori         $a0, $a0, 0x1800
    ctx->pc = 0x100a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6144);
    // 0x100a14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x100a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100a18: 0xac500104  sw          $s0, 0x104($v0)
    ctx->pc = 0x100a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x1BCA2C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2C4u, _value); } while (0);
    // 0x100a1c: 0xac510108  sw          $s1, 0x108($v0)
    ctx->pc = 0x100a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1BCA2C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2C8u, _value); } while (0);
    // 0x100a20: 0xac520114  sw          $s2, 0x114($v0)
    ctx->pc = 0x100a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x1BCA2D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2D4u, _value); } while (0);
    // 0x100a24: 0xac5300e0  sw          $s3, 0xE0($v0)
    ctx->pc = 0x100a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x1BCA2A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2A0u, _value); } while (0);
    // 0x100a28: 0xac460084  sw          $a2, 0x84($v0)
    ctx->pc = 0x100a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1BCA244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA244u, _value); } while (0);
    // 0x100a2c: 0xac450148  sw          $a1, 0x148($v0)
    ctx->pc = 0x100a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x1BCA308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA308u, _value); } while (0);
    // 0x100a30: 0xac4700e8  sw          $a3, 0xE8($v0)
    ctx->pc = 0x100a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1BCA2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2A8u, _value); } while (0);
    // 0x100a34: 0xac4800ec  sw          $t0, 0xEC($v0)
    ctx->pc = 0x100a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x1BCA2ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2ACu, _value); } while (0);
    // 0x100a38: 0xac4900f0  sw          $t1, 0xF0($v0)
    ctx->pc = 0x100a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x1BCA2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2B0u, _value); } while (0);
    // 0x100a3c: 0xac4a00f4  sw          $t2, 0xF4($v0)
    ctx->pc = 0x100a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x1BCA2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2B4u, _value); } while (0);
    // 0x100a40: 0xac4b00f8  sw          $t3, 0xF8($v0)
    ctx->pc = 0x100a40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x1BCA2B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2B8u, _value); } while (0);
    // 0x100a44: 0xac4c010c  sw          $t4, 0x10C($v0)
    ctx->pc = 0x100a44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x1BCA2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2CCu, _value); } while (0);
    // 0x100a48: 0xac4d0110  sw          $t5, 0x110($v0)
    ctx->pc = 0x100a48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x1BCA2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2D0u, _value); } while (0);
    // 0x100a4c: 0xac4e00fc  sw          $t6, 0xFC($v0)
    ctx->pc = 0x100a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x1BCA2BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2BCu, _value); } while (0);
    // 0x100a50: 0xac4f0100  sw          $t7, 0x100($v0)
    ctx->pc = 0x100a50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x1BCA2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2C0u, _value); } while (0);
    // 0x100a54: 0xc0401ea  jal         func_1007A8
    ctx->pc = 0x100A54u;
    SET_GPR_U32(ctx, 31, 0x100A5Cu);
    ctx->pc = 0x100A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100A54u;
    // 0x100a58: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1007A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007A8u, 0x100A54u, 0x100A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A5Cu;
label_100a5c:
    // 0x100a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100a68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100a70: 0x3e00008  jr          $ra
    ctx->pc = 0x100A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A70u;
        // 0x100a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100A78u;
}
