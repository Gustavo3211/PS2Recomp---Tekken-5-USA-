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

// Function: sub_0031E458
// Address: 0x31e458 - 0x31e4c8
void sub_0031E458_0x31e458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E458_0x31e458");
#endif

    switch (ctx->pc) {
        case 0x31e49cu: goto label_31e49c;
        default: break;
    }

    ctx->pc = 0x31e458u;

    // 0x31e458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e45c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31e460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e46c: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x31e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x31e470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e474: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x31e474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x31e478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e480: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31e480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31e484: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x31e484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x31e488: 0xa6070006  sh          $a3, 0x6($s0)
    ctx->pc = 0x31e488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x31e48c: 0xa6080008  sh          $t0, 0x8($s0)
    ctx->pc = 0x31e48cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x31e490: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x31e490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x31e494: 0xc0cf248  jal         func_33C920
    ctx->pc = 0x31E494u;
    SET_GPR_U32(ctx, 31, 0x31E49Cu);
    ctx->pc = 0x31E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E494u;
    // 0x31e498: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C920u, 0x31E494u, 0x31E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E49Cu;
label_31e49c:
    // 0x31e49c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x31e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x31e4a0: 0x24631918  addiu       $v1, $v1, 0x1918
    ctx->pc = 0x31e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6424));
    // 0x31e4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4a8: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x31e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x31e4ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e4bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e4c0: 0x80cf1da  j           func_33C768
    ctx->pc = 0x31E4C0u;
    ctx->pc = 0x31E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E4C0u;
    // 0x31e4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C768u;
    sub_0033C768_0x33c768(rdram, ctx, runtime); return;
    ctx->pc = 0x31E4C8u;
}
