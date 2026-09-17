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

// Function: sub_00276E80
// Address: 0x276e80 - 0x276f08
void sub_00276E80_0x276e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276E80_0x276e80");
#endif

    switch (ctx->pc) {
        case 0x276ec0u: goto label_276ec0;
        default: break;
    }

    ctx->pc = 0x276e80u;

    // 0x276e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276e84: 0x8f83ca60  lw          $v1, -0x35A0($gp)
    ctx->pc = 0x276e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953568)));
    // 0x276e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276e8c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x276e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x276e90: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x276e90u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x276e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276e98: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x276e98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x276e9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x276e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x276ea0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x276ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x276ea4: 0x263101c0  addiu       $s1, $s1, 0x1C0
    ctx->pc = 0x276ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x276ea8: 0x1010  mfhi        $v0
    ctx->pc = 0x276ea8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x276eac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x276eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x276eb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x276eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x276eb4: 0x8c5205bc  lw          $s2, 0x5BC($v0)
    ctx->pc = 0x276eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
    // 0x276eb8: 0xc04a1ea  jal         func_1287A8
    ctx->pc = 0x276EB8u;
    SET_GPR_U32(ctx, 31, 0x276EC0u);
    ctx->pc = 0x276EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276EB8u;
    // 0x276ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287A8u, 0x276EB8u, 0x276EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EC0u;
label_276ec0:
    // 0x276ec0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x276ec4: 0x8f82ca60  lw          $v0, -0x35A0($gp)
    ctx->pc = 0x276ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953568)));
    // 0x276ec8: 0x24848858  addiu       $a0, $a0, -0x77A8
    ctx->pc = 0x276ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x276ecc: 0xac920068  sw          $s2, 0x68($a0)
    ctx->pc = 0x276eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3A88C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A88C0u, _value); } while (0);
    // 0x276ed0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x276ed0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x276ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x276ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x276ed8: 0xaf82ca60  sw          $v0, -0x35A0($gp)
    ctx->pc = 0x276ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953568), GPR_U32(ctx, 2));
    // 0x276edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x276ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276ee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x276ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276ee8: 0x1810  mfhi        $v1
    ctx->pc = 0x276ee8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x276eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276ef0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x276ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x276ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x276ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276ef8: 0x8c620638  lw          $v0, 0x638($v1)
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1592)));
    // 0x276efc: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x276efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x276f00: 0x3e00008  jr          $ra
    ctx->pc = 0x276F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F00u;
        // 0x276f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276F08u;
}
