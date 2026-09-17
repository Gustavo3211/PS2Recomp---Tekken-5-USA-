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

// Function: sub_004A9748
// Address: 0x4a9748 - 0x4a9810
void sub_004A9748_0x4a9748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9748_0x4a9748");
#endif

    switch (ctx->pc) {
        case 0x4a97a4u: goto label_4a97a4;
        default: break;
    }

    ctx->pc = 0x4a9748u;

    // 0x4a9748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a9748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a974c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a9750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a9750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a9754: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a9754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a9758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a9758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a975c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4a975cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4a9760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a9760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a9764: 0x26100c5c  addiu       $s0, $s0, 0xC5C
    ctx->pc = 0x4a9764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3164));
    // 0x4a9768: 0x24639ae0  addiu       $v1, $v1, -0x6520
    ctx->pc = 0x4a9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941408));
    // 0x4a976c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a9770: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a9770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C5Cu));
    // 0x4a9774: 0x32402  srl         $a0, $v1, 16
    ctx->pc = 0x4a9774u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a9778: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4a9778u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a977c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a9780: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4a9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a9784: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a9784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a9788: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a9788u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a978c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a9790: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4a9790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4a9794: 0x94a30c84  lhu         $v1, 0xC84($a1)
    ctx->pc = 0x4a9794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3204)));
    // 0x4a9798: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a9798u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a979c: 0xc12a450  jal         func_4A9140
    ctx->pc = 0x4A979Cu;
    SET_GPR_U32(ctx, 31, 0x4A97A4u);
    ctx->pc = 0x4A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A979Cu;
    // 0x4a97a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9140u, 0x4A979Cu, 0x4A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A97A4u;
label_4a97a4:
    // 0x4a97a4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4a97a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4a97a8: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4a97a8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4a97ac: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4a97acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4a97b0: 0x25290c6c  addiu       $t1, $t1, 0xC6C
    ctx->pc = 0x4a97b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3180));
    // 0x4a97b4: 0x254a0c70  addiu       $t2, $t2, 0xC70
    ctx->pc = 0x4a97b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3184));
    // 0x4a97b8: 0x256b0c74  addiu       $t3, $t3, 0xC74
    ctx->pc = 0x4a97b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3188));
    // 0x4a97bc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C6Cu));
    // 0x4a97c0: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4a97c0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0C70u));
    // 0x4a97c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a97c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97c8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4a97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C74u));
    // 0x4a97cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a97d0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a97d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a97d4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4a97d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4a97d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a97d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a97dc: 0x1114024  and         $t0, $t0, $s1
    ctx->pc = 0x4a97dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 17));
    // 0x4a97e0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4a97e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4a97e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a97e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a97e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a97e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a97ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4a97ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a97f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a97f4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4a97f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a97f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a97fc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a9800: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4a9800u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4a9804: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4a9804u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4a9808: 0x8122288  j           func_488A20
    ctx->pc = 0x4A9808u;
    ctx->pc = 0x4A980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9808u;
    // 0x4a980c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    sub_00488A20_0x488a20(rdram, ctx, runtime); return;
    ctx->pc = 0x4A9810u;
}
