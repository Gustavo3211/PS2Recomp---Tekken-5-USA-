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

// Function: sub_00500930
// Address: 0x500930 - 0x500ce0
void sub_00500930_0x500930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500930_0x500930");
#endif

    switch (ctx->pc) {
        case 0x500a4cu: goto label_500a4c;
        case 0x500a5cu: goto label_500a5c;
        case 0x500b0cu: goto label_500b0c;
        default: break;
    }

    ctx->pc = 0x500930u;

label_500930:
    // 0x500930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x500930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x500934: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x500934u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x500938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x500938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50093c: 0x256ba650  addiu       $t3, $t3, -0x59B0
    ctx->pc = 0x50093cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294944336));
    // 0x500940: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x500940u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500944: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x500944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x500948: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x500948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA650u));
    // 0x50094c: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x50094cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x500950: 0x91840000  lbu         $a0, 0x0($t4)
    ctx->pc = 0x500950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x500954: 0x3c0d008f  lui         $t5, 0x8F
    ctx->pc = 0x500954u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)143 << 16));
    // 0x500958: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x500958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x50095c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x50095cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500960: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x500960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x500964: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x500964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x500968: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x500968u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x50096c: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x50096cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x500970: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x500970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500974: 0x8d690004  lw          $t1, 0x4($t3)
    ctx->pc = 0x500974u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x500978: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x500978u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x50097c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50097cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500980: 0x252a000f  addiu       $t2, $t1, 0xF
    ctx->pc = 0x500980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x500984: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x500984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500988: 0x142480b  movn        $t1, $t2, $v0
    ctx->pc = 0x500988u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x50098c: 0x24ea000f  addiu       $t2, $a3, 0xF
    ctx->pc = 0x50098cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x500990: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x500990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x500994: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x500994u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x500998: 0x24830fff  addiu       $v1, $a0, 0xFFF
    ctx->pc = 0x500998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x50099c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x50099cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5009a0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x5009a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x5009a4: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x5009a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5009a8: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x5009a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x5009ac: 0x142380b  movn        $a3, $t2, $v0
    ctx->pc = 0x5009acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 10));
    // 0x5009b0: 0xada4a674  sw          $a0, -0x598C($t5)
    ctx->pc = 0x5009b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294944372), GPR_U32(ctx, 4));
    // 0x5009b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x5009b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5009b8: 0xa94818  mult        $t1, $a1, $t1
    ctx->pc = 0x5009b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x5009bc: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x5009bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x5009c0: 0x91820001  lbu         $v0, 0x1($t4)
    ctx->pc = 0x5009c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x5009c4: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x5009c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x5009c8: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x5009c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x5009cc: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x5009ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x5009d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x5009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x5009d4: 0x24460fff  addiu       $a2, $v0, 0xFFF
    ctx->pc = 0x5009d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x5009d8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x5009d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5009dc: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x5009dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x5009e0: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x5009e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x5009e4: 0xad62a678  sw          $v0, -0x5988($t3)
    ctx->pc = 0x5009e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294944376), GPR_U32(ctx, 2));
    // 0x5009e8: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x5009e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x5009ec: 0x1034018  mult        $t0, $t0, $v1
    ctx->pc = 0x5009ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x5009f0: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x5009f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x5009f4: 0x25030fff  addiu       $v1, $t0, 0xFFF
    ctx->pc = 0x5009f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x5009f8: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x5009f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5009fc: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x5009fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x500a00: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x500a00u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x500a04: 0xad48a67c  sw          $t0, -0x5984($t2)
    ctx->pc = 0x500a04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294944380), GPR_U32(ctx, 8));
    // 0x500a08: 0x813f8c8  j           func_4FE320
    ctx->pc = 0x500A08u;
    ctx->pc = 0x500A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500A08u;
    // 0x500a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE320u;
    sub_004FE320_0x4fe320(rdram, ctx, runtime); return;
    ctx->pc = 0x500A10u;
    // 0x500a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500a18: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x500a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500a20: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x500a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500a28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x500a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x500a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x500a30: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x500a30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a38: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x500a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x500a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x500a40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x500a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x500a44: 0xc14024c  jal         func_500930
    ctx->pc = 0x500A44u;
    SET_GPR_U32(ctx, 31, 0x500A4Cu);
    ctx->pc = 0x500A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500A44u;
    // 0x500a48: 0x140982d  daddu       $s3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    goto label_500930;
    ctx->pc = 0x500A4Cu;
label_500a4c:
    // 0x500a4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a54: 0xc14024c  jal         func_500930
    ctx->pc = 0x500A54u;
    SET_GPR_U32(ctx, 31, 0x500A5Cu);
    ctx->pc = 0x500A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500A54u;
    // 0x500a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    goto label_500930;
    ctx->pc = 0x500A5Cu;
label_500a5c:
    // 0x500a5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x500a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x500a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x500a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x500a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500a78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x500a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500a7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x500a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x500a80: 0x814024c  j           func_500930
    ctx->pc = 0x500A80u;
    ctx->pc = 0x500A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500A80u;
    // 0x500a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_500930;
    ctx->pc = 0x500A88u;
    // 0x500a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x500a8c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x500a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500a94: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x500a94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x500a98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x500a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x500a9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x500a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500aa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x500aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x500aa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x500aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500aa8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x500aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x500aac: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x500aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x500ab0: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x500ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x500ab4: 0x2610a6a0  addiu       $s0, $s0, -0x5960
    ctx->pc = 0x500ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944416));
    // 0x500ab8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x500ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x500abc: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x500abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x500ac0: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x500ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x500ac4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x500ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500ac8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x500ac8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x500acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x500accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500ad0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x500ad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x500ad4: 0xad02a674  sw          $v0, -0x598C($t0)
    ctx->pc = 0x500ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294944372), GPR_U32(ctx, 2));
    // 0x500ad8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x500ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x500adc: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x500adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x500ae0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x500ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500ae4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x500ae4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x500ae8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x500ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x500aec: 0xad22a678  sw          $v0, -0x5988($t1)
    ctx->pc = 0x500aecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944376), GPR_U32(ctx, 2));
    // 0x500af0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x500af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x500af4: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x500af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x500af8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x500af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500afc: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x500afcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x500b00: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x500b00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x500b04: 0xc13f8c8  jal         func_4FE320
    ctx->pc = 0x500B04u;
    SET_GPR_U32(ctx, 31, 0x500B0Cu);
    ctx->pc = 0x500B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500B04u;
    // 0x500b08: 0xacc3a67c  sw          $v1, -0x5984($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944380), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE320u, 0x500B04u, 0x500B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500B0Cu;
label_500b0c:
    // 0x500b0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x500b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x500b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x500b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x500b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x500b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500b1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x500b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x500b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500b28: 0x814024c  j           func_500930
    ctx->pc = 0x500B28u;
    ctx->pc = 0x500B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500B28u;
    // 0x500b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500930u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_500930;
    ctx->pc = 0x500B30u;
    // 0x500b30: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x500b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500b34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b38: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500b3c: 0x24c70fff  addiu       $a3, $a2, 0xFFF
    ctx->pc = 0x500b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500b40: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500b40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500b44: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x500b44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x500b48: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500b48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500b4c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x500b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x500b50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x500b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500b54: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500b58: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x500b58u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500b5c: 0x24670fff  addiu       $a3, $v1, 0xFFF
    ctx->pc = 0x500b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x500b60: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x500b60u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x500b64: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x500b64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x500b68: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x500b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x500b6c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x500b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x500b70: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500b74: 0x24c40fff  addiu       $a0, $a2, 0xFFF
    ctx->pc = 0x500b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500b78: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500b7c: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x500b7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x500b80: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500b80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500b84: 0x3e00008  jr          $ra
    ctx->pc = 0x500B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500B84u;
        // 0x500b88: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500B8Cu;
    // 0x500b8c: 0x0  nop
    ctx->pc = 0x500b8cu;
    // NOP
    // 0x500b90: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x500b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500b94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500b98: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500b9c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x500b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x500ba0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x500ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500ba4: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500ba8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x500ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x500bac: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x500bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x500bb0: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x500BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500BB4u;
        // 0x500bb8: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500BBCu;
    // 0x500bbc: 0x0  nop
    ctx->pc = 0x500bbcu;
    // NOP
    // 0x500bc0: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x500bc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500bc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500bc8: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500bcc: 0x24c70fff  addiu       $a3, $a2, 0xFFF
    ctx->pc = 0x500bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500bd0: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500bd4: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x500bd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x500bd8: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500bd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500bdc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x500bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x500be0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x500be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x500be4: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500be4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500be8: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x500be8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500bec: 0x24670fff  addiu       $a3, $v1, 0xFFF
    ctx->pc = 0x500becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x500bf0: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x500bf0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x500bf4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x500bf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x500bf8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x500bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x500bfc: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x500bfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500c00: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500c04: 0x24c40fff  addiu       $a0, $a2, 0xFFF
    ctx->pc = 0x500c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500c08: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500c08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500c0c: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x500c0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x500c10: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500c10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500c14: 0x3e00008  jr          $ra
    ctx->pc = 0x500C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500C14u;
        // 0x500c18: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500C1Cu;
    // 0x500c1c: 0x0  nop
    ctx->pc = 0x500c1cu;
    // NOP
    // 0x500c20: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x500c20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500c24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500c28: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500c2c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x500c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x500c30: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x500c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x500c34: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500c38: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x500c38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x500c3c: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x500c3cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500c40: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500c40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500c44: 0x3e00008  jr          $ra
    ctx->pc = 0x500C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500C44u;
        // 0x500c48: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500C4Cu;
    // 0x500c4c: 0x0  nop
    ctx->pc = 0x500c4cu;
    // NOP
    // 0x500c50: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x500c50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500c54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500c58: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500c5c: 0x24c70fff  addiu       $a3, $a2, 0xFFF
    ctx->pc = 0x500c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500c60: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500c64: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x500c64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x500c68: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500c68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500c6c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x500c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x500c70: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x500c70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x500c74: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500c78: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x500c78u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500c7c: 0x24670fff  addiu       $a3, $v1, 0xFFF
    ctx->pc = 0x500c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x500c80: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x500c80u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x500c84: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x500c84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x500c88: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x500c88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x500c8c: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x500c8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500c90: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500c94: 0x24c40fff  addiu       $a0, $a2, 0xFFF
    ctx->pc = 0x500c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x500c98: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x500c98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x500c9c: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x500c9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x500ca0: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x500ca0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x500ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x500CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500CA4u;
        // 0x500ca8: 0xa4a60004  sh          $a2, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500CACu;
    // 0x500cac: 0x0  nop
    ctx->pc = 0x500cacu;
    // NOP
    // 0x500cb0: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x500cb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x500cb4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500cb8: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500cbc: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x500cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x500cc0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x500cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x500cc4: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x500cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x500cc8: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x500cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x500ccc: 0x94860004  lhu         $a2, 0x4($a0)
    ctx->pc = 0x500cccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x500cd0: 0xc63018  mult        $a2, $a2, $a2
    ctx->pc = 0x500cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x500cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x500CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x500CD4u;
        // 0x500cd8: 0xa4a60004  sh          $a2, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x500CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500CDCu;
    // 0x500cdc: 0x0  nop
    ctx->pc = 0x500cdcu;
    // NOP
    ctx->pc = 0x500ce0u;
}
